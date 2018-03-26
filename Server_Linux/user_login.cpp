#include <iostream>
#include <string>
#include <list>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <unistd.h>
#include <pthread.h>
#include <mysql.h>
#include <time.h>
#include <signal.h>
#include "chatting.h"

using namespace std;

list<client_info> cis;
struct user_info uis;
//char allinfo[1024];


int main()
{
	signal(SIGPIPE,SIG_IGN);

	
	int sockListen = socket(AF_INET, SOCK_STREAM, 0);

	struct sockaddr_in myaddr;
	myaddr.sin_family = AF_INET;
	myaddr.sin_addr.s_addr = INADDR_ANY;
	myaddr.sin_port = htons(38861);

	int optval = 1;
	setsockopt(sockListen, SOL_SOCKET, SO_REUSEADDR, &optval, sizeof(optval));

	if(bind(sockListen, (struct sockaddr*)&myaddr, sizeof(myaddr)) == -1)
	{
		perror("bind error");
		exit(-1);
	}

	listen(sockListen,CLIENT);
	connect_mysql();   //连接服务器；


	int sockConn;
	struct sockaddr_in addr;
	socklen_t len;


	while(1)
	{
		len = sizeof(addr);
		sockConn = accept(sockListen, (struct sockaddr*)&addr, &len);           
		if(sockConn == -1)
		{
			perror("accept error");
			continue;
		}
		else
		{
			printf("连接成功!\n");
		}
		//创建线程，不断连接客户端；
		pthread_t accept_tid;
		if(0 != pthread_create(&accept_tid,NULL,accept_fun,(void*)(long)sockConn))
		{
			perror("pthread_create accept fail:");
			exit(-1);
		}


	}

	return 0;
}

void* accept_fun(void* arg)
{
	printf("线程函数-》注册登录请求!\n");

	pthread_detach(pthread_self());

	char msg[1024];
	char back[1024];
	int ret;	
	socklen_t len;
	int sockConn = (long)arg;


	while(1)
	{
		//接收客户端发过来的指令；
		ret = recv(sockConn, msg, sizeof(msg)-1, 0);
//		printf("***%d\n",ret);

		if(ret > 0)
		{
			msg[ret] = '\0';
			printf("xian1%s\n",msg);
			char delims[] = "#";
			char *result = NULL;
			result = strtok( msg, delims );
			char* a[7] = {NULL};
			int i = 0;

			while( result != NULL ) 
			{
				a[i] = result;
				i++;
				result = strtok( NULL, delims );
			}
			if(strcmp(a[0],"usercheck") == 0)
			{
				printf("%s\n",a[1]);

				if(a[1] != NULL)
				{
					if(username_check(a[1]))
					{
						if(return_rows() == 0)
						{
							strcpy(back,"usernameok");

							strcpy(uis.username,a[1]);
							send(sockConn,back,strlen(back),0);
						}
						else
						{
							strcpy(back,"usernamefail");
							send(sockConn,back,strlen(back),0);

						}
					}
				}
			
			}


			if(strcmp(a[0],"logininfo") == 0)		
			{
				//注册			
				printf("sdadasdsds\n");
				strcpy(uis.password,a[1]);
				strcpy(uis.sex,a[2]);
				strcpy(uis.birth,a[3]);
				strcpy(uis.phone,a[4]);
				strcpy(uis.hobby,a[5]);
				//printf("%s\n",hobby);

				if(userinfo_mysql())//info存入数据库；
				{
					printf("注册成功！\n");
					sprintf(back,"loginok#%s",uis.username);
					send(sockConn,back,strlen(back),0);
				}
				else
				{
					printf("注册失败！\n");
					strcpy(back,"loginfail");					
					send(sockConn,back,strlen(back),0);					
				}		
			}
			if(strcmp(a[0],"login") == 0)
			{
				//客户端登录，将ID和密码发给服务端校验；			

				printf("登录2\n");   //ID和密码传个服务端校验；
//				strcpy(uis.username,a[1]);    
//				strcpy(uis.password,a[2]);
				if(check_name_pwd(a[1],a[2]))
				{
					if(return_rows() == 0)
					{
						strcpy(back,"loginerr");
						send(sockConn,back,strlen(back),0);
					}
					else
					{
						//聊天//
						printf("ok!\n");
						sprintf(back,"loginsucess:%s",a[1]);
						send(sockConn,back,strlen(back),0);

						client_info ci;
						ci.sockConn = sockConn;
						strcpy(ci.username,a[1]);
						cis.push_back(ci);
						/*
						pthread_t client_tid;
						if(0 != pthread_create(&client_tid,NULL,clientSrv,(void*)(long)sockConn))
						{
							perror("pthread_create clientSrv fail:");
							break;
						}				
						*/

						fnChatting((void*)(long)sockConn);

					}

				}
				else printf("check fail\n");
			}			
			 if(strcmp(a[0],"change") == 0)
			 {
				 //客户端修改密码，将ID和手机号发个客户端校验；
				if(check_name_phone(a[1],a[2]))
				{
					if(return_rows() == 0)
					{
						strcpy(back,"findfail");
						send(sockConn,back,strlen(back),0);
					}
					else
					{
						printf("ok\n");
						//修改
					//	strcpy(uis.password,a[3]);
						change_pwd(a[3],a[1]);   //存入数据库；
						strcpy(back,"findok");
						send(sockConn,back,strlen(back),0);
	
					}

				}

			}
		//	else
		}

	}
	
	close(sockConn);

	return NULL;

}


//void* clientSrv(void* arg)
int fnChatting(void* socket)
{
//	pthread_detach(pthread_self());
	printf("非线程-》群聊单聊请求！\n");

	int ret;
	char msg[1024];
	char chSendtoMe[1024];
	char chSendtoAll[1024];
	char message[1024];
	int sockConn = (long)socket;
	char chLocalUname[100];
	
	list<client_info>::iterator it_a;
	for(it_a = cis.begin(); it_a != cis.end(); ++it_a)
	{
		if(it_a->sockConn == sockConn)
		{

			sprintf(chSendtoAll,"loginfri#%s",it_a->username);
			strcpy(chLocalUname,it_a->username);
			list<client_info>::iterator it_c;
			for(it_c = cis.begin(); it_c != cis.end(); ++it_c)
			{
				if(it_c->sockConn != sockConn)
				{
					send(it_c->sockConn,chSendtoAll,strlen(chSendtoAll),0); //上线消息发个所有人，不包括自己；
					sleep(0.5);
				}
			}
			break;			
		}
	}
	

	while(1)
	{

		ret = recv(sockConn, msg, sizeof(msg)-1, 0);
		list<client_info>::iterator it;
		if(ret <= 0) break;	

		msg[ret] = '\0';
		printf("xian2%s\n",msg);

		if(strcmp(msg,"flushfri") == 0)
		{
//			pid_t pid = fork();
//			if(pid == 0)
//			{

				char flush[1024];
				for(it = cis.begin(); it != cis.end(); ++it)
				{				
					if(it->sockConn != sockConn)
					{
						sleep(1);
						sprintf(flush,"loginfri#%s",it->username);  //全部好友；
						//	sleep(0.5);
						send(sockConn,flush,strlen(flush),0);					
					}
				}
//			}

		}		

		else
		{
			char delims[] = "#";
			char *result = NULL;
			result = strtok( msg, delims );
			char* a[4] = {NULL};
			int i = 0;

			while( result != NULL ) 
			{
				a[i] = result;
				i++;
				result = strtok( NULL, delims );
			}
			if(strcmp(a[0],"showinfo") == 0)   //显示好友信息；
			{				
				showall(a[1]);
				char buff[1024];
				sprintf(buff,"sendinfo#%s",allinfo);
				send(sockConn,buff,sizeof(buff),0);
			}

			else if(strcmp(a[0],"addfriend") == 0)
			{
				printf("加好友-》%s\n",a[1]);
				//将好友发送到服务器校验，看是否为其好友；
				FriendRelCheck(chLocalUname,a[1]);

				if(return_rows() == 0)  //说明不是好友;
				{

					for(it = cis.begin(); it != cis.end(); ++it)
					{
						if(strcmp(it->username,a[1]) == 0)
						{				
							sprintf(message,"friendask#%s",chLocalUname);
							printf("%s\n",message);
							send(it->sockConn,message,strlen(message),0);  //发送好友请求；
							break;
						}
					}
				}
				else
				{
					sprintf(message,"friendexist#%s",a[1]);
					send(sockConn,message,strlen(message),0);
				}

			}

			else if(strcmp(a[0],"agreeask") == 0)
			{
				for(it = cis.begin(); it != cis.end(); ++it)
				{
					if(strcmp(it->username,a[1]) == 0)
					{				
						sprintf(message,"friendagree#%s",chLocalUname);
						
						printf("%s\n",message);
						send(it->sockConn,message,strlen(message),0);  //同意好友请求；
						FriendRelCheck(chLocalUname,a[1]);

						if(return_rows() == 0)  //说明不是好友;
						{
							FriendRelation(chLocalUname,a[1]);
							FriendRelation(a[1],chLocalUname);
						}
						break;
					}
				}

			}

			else if(strcmp(a[0],"friendrel") == 0)
			{
				if(strcmp(a[1],"allfri") == 0)
				{
					char flush[1024];
					for(it = cis.begin(); it != cis.end(); ++it)
					{				
						if(it->sockConn != sockConn)
						{
							sprintf(flush,"loginfri#%s",it->username);  //全部好友；
							send(sockConn,flush,strlen(flush),0);  //上线好友发给自己；
							sleep(1);					
						}
					}


				}
				if(strcmp(a[2],"localfri") == 0)
				{
					fnFlushLineFriend((void*)(long)sockConn,chLocalUname);			
		
					
				}
				if(strcmp(a[3],"offlinefri") == 0)
				{

//					fnFlushoffLineFriend((void*)(long)sockConn);

				}
			}

			else if(strcmp(a[0],"allfriend") == 0)  //群聊；
			{
				char message[1024];
				sprintf(message,"tofriends#<%s>\n%s",chLocalUname,a[1]);
				//发给所有在线客户
				for(it = cis.begin(); it != cis.end(); ++it)
				{
					if(it->sockConn != sockConn)
					{

						send(it->sockConn, message, strlen(message), 0);
					
						printf("ff%sff\n",message);
					}
				}
			}


			else if(strcmp(a[0],"onefriend") == 0)   //单聊
			{
				char message[1024];
				printf("%s\n",a[1]);//姓名；
				printf("%s\n",a[2]); //内容;


				list<client_info>::iterator it;
				for(it = cis.begin(); it != cis.end(); ++it)
				{
					if(strcmp(it->username,a[1]) == 0)
					{										
						list<client_info>::iterator it_1;						
						for(it_1 = cis.begin(); it_1 != cis.end(); ++it_1)
						{
							if(it_1->sockConn == sockConn)
							sprintf(message,"tofriend:<%s>\n%s",it_1->username,a[2]);
						//	break;
						}
						send(it->sockConn,message,strlen(message),0);
						printf("%s\n",message);
						break;
					}
				}




			}
		}
	}

	//离线；
	list<client_info>::iterator it_1;
	for(it_1 = cis.begin(); it_1 != cis.end(); ++it_1)
	{
		if(it_1->sockConn == sockConn)
		{
			sprintf(msg,"loginxia#%s",it_1->username);
			list<client_info>::iterator it;
			for(it = cis.begin(); it != cis.end(); ++it)
			{
				if(it->sockConn != sockConn)
				{
					send(it->sockConn, msg, strlen(msg), 0);
					printf("%s\n",msg);
				}
			}

			cis.erase(it_1);
			break;
		}
	}

//	close(sockConn);

	return 0;
}


int fnFlushLineFriend(void* socket,char* chLocalUname)
{
	int sockConn = (long)socket;

	sprintf(sql,"select friendname from friend where localname = '%s'",chLocalUname);

	mysql_query(&mysql,sql);
	char message[1024];
	unsigned int num_fields;
	unsigned int i;
	unsigned long ret;
	if((ret = mysql_affected_rows(&mysql)) > 0)  //获取行数row，row>0 ,表示获取到了表；否则获取失败；
	{
		MYSQL_RES* res = NULL;
		res = mysql_store_result(&mysql);
		char* p = NULL;
		if(res != NULL)
		{
			MYSQL_ROW row;
			num_fields = mysql_num_fields(res);  //获取列数；

			while((row = mysql_fetch_row(res)))   ///获取每行信息；
			{
				for(i=0;i<num_fields;i++)
				{
					printf("local->%s\n",row[i]);

					list<client_info>::iterator it;
					for(it = cis.begin(); it != cis.end(); ++it)
					{
						if(strcmp(it->username,row[i]) == 0)
						{				
							sprintf(message,"localfriends#%s",it->username);
							printf("line->%s\n",message);				
							send(sockConn,message,strlen(message),0);  //自己的好友发给自己；
						//	sleep(1);
							break;
						}
					}

					list<client_info>::iterator it_a;
					for(it_a = cis.begin();it_a != cis.end(); ++it_a)
					{
						if(it_a->sockConn != sockConn && strcmp(it_a->username,row[i]) == 0)
						{

							sprintf(message,"localfriends#%s",chLocalUname);
							send(it_a->sockConn,message,strlen(message),0);
							sleep(1);
						}
					}

				}
			}

			mysql_free_result(res);
		}
		else
			printf("输出失败!\n");
	}

}

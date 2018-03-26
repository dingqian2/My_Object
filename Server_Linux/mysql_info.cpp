/*=============================================================================
#       @name         :wangling
#       @file         :/home/dj/2期项目/2.1\mysql_info.cpp
#       @date         :2018/02/06 11:22
=============================================================================*/



#include <iostream>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <mysql.h>
#include "chatting.h"
MYSQL mysql;
char sql[1024];
char allinfo[1024];

//连接服务器
int connect_mysql()
{


       if(mysql_init(&mysql) == NULL ) ///初始化数据库；
        {
                fprintf(stderr,"mysql_init fail ERROR:%s",mysql_error(&mysql));
                return -1;
        }

        if(NULL == mysql_real_connect(&mysql,"localhost","user","123456","login_info",0,NULL,0))  //连接数据库；
	{
		fprintf(stderr,"mysql_real_connect fail ERROR:%s\n",mysql_error(&mysql) );
		return -1;
	}

	strcpy(sql,"set names utf8");


	if(0 != mysql_query(&mysql,sql))
	{
		fprintf(stderr,"设置失败:%s\n",mysql_error(&mysql) );
	}

}


//将客户端发过来的注册信息存入数据库；
bool userinfo_mysql()
{
	sprintf(sql,"insert into user_info (username,password,sex,birth,phone,hobby) values('%s','%s','%s','%s','%s','%s' )",uis.username,uis.password,uis.sex,uis.birth,uis.phone,uis.hobby);
	
	if(0 != mysql_query(&mysql,sql))
	{
		fprintf(stderr,"保存失败:%s\n",mysql_error(&mysql) );
		return false;
	}

	return true;
}

//检测注册的用户名是否存在；
bool username_check(char* username)
{
	sprintf(sql,"select * from user_info where username = '%s'",username);
	
	if(0 != mysql_query(&mysql,sql))
	{
		fprintf(stderr,"查询失败:%s\n",mysql_error(&mysql) );
		return false;
	}

	return true;


}

//检测客户端登录时，发给服务端的ID和密码是否有误；
bool check_name_pwd(char* username,char* password)
{
	
	sprintf(sql,"select * from user_info where username = '%s' and password = '%s'",username,password);
	
	if(0 != mysql_query(&mysql,sql))
	{
		fprintf(stderr,"查询失败:%s\n",mysql_error(&mysql) );
		return false;
	}

	return true;


}

//检测客户端需要修改密码，发给服务端的ID和手机号是否有误；
bool check_name_phone(char* username ,char* phone)
{
	
	sprintf(sql,"select * from user_info where username = '%s' and phone = '%s'",username,phone);
	
	if(0 != mysql_query(&mysql,sql))
	{
		fprintf(stderr,"查询失败:%s\n",mysql_error(&mysql) );
		return false;
	}

	return true;
}

//修改密码；
bool change_pwd(char* password,char* username)
{

	sprintf(sql,"update user_info set password = md5('%s') where username = '%s'",password,username);
	
	if(0 != mysql_query(&mysql,sql))
	{
		fprintf(stderr,"保存失败:%s\n",mysql_error(&mysql) );
		return false;
	}

	return true;
}


bool FriendRelation(char* pLocalUname,char* pFriendname)
{

	sprintf(sql,"insert into friend values ('%s','%s')",pLocalUname,pFriendname);
	
	if(0 != mysql_query(&mysql,sql))
	{
		fprintf(stderr,"保存失败:%s\n",mysql_error(&mysql) );
		return false;
	}

	return true;

}
bool FriendRelCheck(char* pLocalUname,char* pFriendname)
{
	sprintf(sql,"select * from friend where localname = '%s' and friendname = '%s'",pLocalUname,pFriendname);
	
	if(0 != mysql_query(&mysql,sql))
	{
		fprintf(stderr,"保存失败:%s\n",mysql_error(&mysql) );
		return false;
	}

	return true;



}



/*
int show(char* username)
{

        sprintf(sql,"select username from user_info where ID = %d",ID);

        mysql_query(&mysql,sql);

        unsigned int num_fields;
        unsigned int i;
        unsigned long ret;
        if((ret = mysql_affected_rows(&mysql)) > 0)  //获取行数row，row>0 ,表示获取到了表；否则获取失败；
        {
                MYSQL_RES* res = NULL;
                res = mysql_store_result(&mysql);

                if(res != NULL)
                {
                        MYSQL_ROW row;
                        num_fields = mysql_num_fields(res);  //获取列数；
			
                        while((row = mysql_fetch_row(res)))   ///获取每行信息；
                        {
                                for(i=0;i<num_fields;i++)
				{
                                        printf("%s\n",row[i]);
 					strcpy(username,row[i]);
				}
                       }
			
                        mysql_free_result(res);
                }
                else
                        printf("输出失败!\n");
        }

}
*/

//查看用户信息；
int showall(char* name)
{

	char* p[6];

        sprintf(sql,"select * from user_info where username = '%s'",name);

        mysql_query(&mysql,sql);

        unsigned int num_fields;
        unsigned int i;
        unsigned long ret;
        if((ret = mysql_affected_rows(&mysql)) > 0)  //获取行数row，row>0 ,表示获取到了表；否则获取失败；
        {
                MYSQL_RES* res = NULL;
                res = mysql_store_result(&mysql);

                if(res != NULL)
                {
                        MYSQL_ROW row;
                        num_fields = mysql_num_fields(res);  //获取列数；
			
                        while((row = mysql_fetch_row(res)))   ///获取每行信息；
                        {
                                for(i=0;i<num_fields;i++)
				{

				 	p[i] = row[i];				
				}
                       }
			
                        mysql_free_result(res);
                }
                else
                        printf("输出失败!\n");
        }

	sprintf(allinfo,"%s:%s:%s:%s:%s",p[0],p[2],p[3],p[4],p[5]); //用户名，性别，生日，喜好，手机号；

	printf("%s\n",allinfo);
}


//返回select子句查询结果以及查询行数；
int return_rows()
{
        unsigned int rows;
        unsigned long ret;

        MYSQL_RES* res = NULL;
        res = mysql_store_result(&mysql);
        if(res != NULL)
        {
                rows = mysql_num_rows(res);
                mysql_free_result(res);
        }
        else return -1;
	printf("rows = %d\n",rows);

        return rows;

}

  





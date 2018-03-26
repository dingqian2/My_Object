/*=============================================================================
#       @name         :wangling
#       @file         :/home/dj/2期项目/2.1\chatting.h
#       @date         :2018/02/06 11:20
=============================================================================*/



#ifndef _CHATTING_H_
#define _CHATTING_H_


#include <list>
#include <cstdio>
#include <iostream>
#include <mysql.h>
using namespace std;

#define CLIENT 20

struct client_info
{
	int sockConn;
	char username[100];

};

struct user_info
{
	char username[100];
	char password[34];
	char sex[5];
	char birth[20];
	char phone[13];
	char hobby[100];
};

extern list<client_info> cis;
extern struct user_info uis;

extern char allinfo[1024];
extern MYSQL mysql;
extern char sql[1024];


//连接服务器
int connect_mysql();
//将客户端发过来的注册信息存入数据库；
bool userinfo_mysql();
//检测注册的用户名是否存在；
bool username_check(char* username);
//检测客户端登录时，发给服务端的ID和密码是否有误；
bool check_name_pwd(char* username,char* password);
//检测客户端需要修改密码，发给服务端的ID和手机号是否有误；
bool check_name_phone(char* username ,char* phone);
//修改密码；
bool change_pwd(char* password,char* username);
//查看用户信息；
int showall(char* name);
//返回select子句查询结果以及查询行数；
int return_rows();
bool FriendRelation(char* pLocalUname,char* pFriendname);
bool FriendRelCheck(char* pLocalUname,char* pFriendname);


void* clientSrv(void* arg);
void* accept_fun(void* arg);
int fnChatting(void* socket);
int fnFlushLineFriend(void* socket,char* chLocalUname);
int fnoffLineFlushFriend(void* socket,char* chLocalUname);





#endif


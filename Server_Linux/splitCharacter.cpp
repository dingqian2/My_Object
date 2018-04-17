/*=============================================================================
#       @name         :DingQian
#       @file         :/home/dj/2期项目/2.1\splitCharacter.c
#       @date         :2018/02/24 08:54
=============================================================================*/


#include <iostream>
#include <cstdio>
#include <cstring>
#include <list>
using namespace std;

list<char*> mySplit(char* str,const char* delims)
{
	list<char*> res;
	char* result = NULL;
	result = strtok(str,delims);

	while(result != NULL)
	{
		res.push_back(result);
		result = strtok(NULL,delims);
	}

	return res;
}


int main(int argc ,char** argv)
{
	list<char*> res;
	char* str[10] = {NULL};
	int i = 0;	

	res = mySplit(argv[1],argv[2]);
	
	list<char*>::iterator it;
	for(it = res.begin();it != res.end();++it,++i)
	{
		cout<<*it<<endl;
		str[i] = *it;
	}
	
	//printf("\n%s\n",str[3]);

	return 0;
}


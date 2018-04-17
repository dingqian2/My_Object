/*=============================================================================
#       @name         :DingQian
#       @file         :/home/dj/2期项目/2.1\splitCharacter.c
#       @date         :2018/02/24 08:54
=============================================================================*/


#include <iostream>
#include <cstdio>
#include <cstring>
#include <vector>
#include "mysplit.h"
using namespace std;

vector<char*> mySplit(char* str,const char* delims)
{
	vector<char*> res;
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
	vector<char*> res = mySplit(argv[1],argv[2]);
	int i;

	for(i=0;i<res.size();i++)
		cout<<res[i]<<endl;
}

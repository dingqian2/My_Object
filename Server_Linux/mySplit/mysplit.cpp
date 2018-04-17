/*=============================================================================
#       @name         :DingQian
#       @file         :/home/dj/2期项目/2.1\splitCharacter.c
#       @date         :2018/02/24 08:54
=============================================================================*/


#include <iostream>
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


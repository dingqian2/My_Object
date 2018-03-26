/*=============================================================================
#       @name         :wangling
#       @file         :/home/dj/2期项目/2.1/mySplit\main.cpp
#       @date         :2018/02/24 09:43
=============================================================================*/



#include <iostream>
#include <vector>
#include "mysplit.h"
using namespace std;


int main(int argc,char** argv)
{
	vector<char*> str;
	char res[100];
	char de[10];
	int i;

	cout<<"input character:";
	cin>>res;

	cout<<"input delimt:";
	cin>>de;

	str = mySplit(res,de);

	for(i=0;i<str.size();i++)
		cout<<str[i]<<endl;		

	return 0;
}


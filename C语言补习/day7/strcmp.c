/**************************************************************
 * File Name: strcmp.c
 * User 	: Scoaming
 * QQ       : 1033601743
 * Email    : 1033601743@qq.com
 * CTime    : 2021年07月13日 星期二 02时10分04秒
***************************************************************/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int i;
	int num1 = 0, num2 = 0;
	int Max;
	char str1[50];
	char str2[50];
	gets(str1);
	gets(str2);
	//求两个字符串的有效长度
	for(i = 0; str1[i] !='\0'; i++)
	{
		num1++;
	}
	for(i = 0; str2[i] !='\0'; i++)
	{
		num2++;
	}
	//找出两个字符串长度较大的一个
	Max = (num1>num2)?num1:num2;
	
	//进行逐个比较
	for(i = 0; i < Max; i++)
	{
		if(str1[i] > str2[i])
		{
			printf("1\n");
			break;
		}
		else if(str1[i] < str2[i])
		{
			printf("-1\n");
			break;
		}
	}
	if(str1[i] == str2[i]) printf("0\n");
	return 0;
}

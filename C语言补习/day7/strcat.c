/**************************************************************
 * File Name: strcat.c
 * User 	: Scoaming
 * QQ       : 1033601743
 * Email    : 1033601743@qq.com
 * CTime    : 2021年07月13日 星期二 01时14分27秒
***************************************************************/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int i;
	int num = 0;
	char str1[255];
	char str2[50];
	gets(str1);
	gets(str2);

	//计算字符串1的有效长度
	for(i = 0; str1[i] != '\0'; i++)
	{
		num++;
	}
	//将字符串2添加到字符串1的后面
	for(i = 0; str2[i] != '\0'; i++)
	{
		str1[num+i] = str2[i];
	}
	//在字符串1最后补上'\0'
	str1[num+i] = '\0';

	printf("%s\n", str1);

	 return 0;
}

/**************************************************************
 * File Name: strcpy.c
 * User 	: Scoaming
 * QQ       : 1033601743
 * Email    : 1033601743@qq.com
 * CTime    : 2021年07月13日 星期二 01时52分29秒
***************************************************************/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int i;
	int num = 0;
	char str1[50];
	char str2[50];
	gets(str1);
	gets(str2);
	printf("str1 = %s ", str1);
	printf("str2 = %s\n", str2);
	
	//计算str1字符串的有效字符长度
	for(i = 0; str1[i] != '\0'; i++)
	{
		num++;
	}
	//将str1字符串清空
	for(i = 0; i < num; i++)
	{
		str1[i] = 0;
	}
	//计算str2字符串的有效长度
	num = 0;
	for(i = 0; str2[i] != '\0'; i++)
	{
		num++;
	}
	//将str2字串复制到str1中
	for(i = 0; i <= num; i++)
	{
		str1[i] = str2[i];
	}
	printf("str1 = %s\n", str1);

	return 0;
}

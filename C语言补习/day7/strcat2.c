/**************************************************************
 * File Name: strcat2.c
 * User 	: Scoaming
 * QQ       : 1033601743
 * Email    : 1033601743@qq.com
 * CTime    : 2021年07月13日 星期二 04时39分24秒
***************************************************************/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int i = 0, j = 0;
	char str1[50] = "Hello";
	char str2[50] = " World!";
	
	while(str1[i] != '\0')
	{
		i++;
	}
	while(str2[j] != '\0')
	{
		str1[i+j] = str2[j];
		j++;
	}
	printf("%s\n", str1);
	return 0;
}

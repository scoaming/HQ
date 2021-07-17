/**************************************************************
 * File Name: strcat_point.c
 * User 	: Scoaming
 * QQ       : 1033601743
 * Email    : 1033601743@qq.com
 * CTime    : 2021年07月14日 星期三 05时03分31秒
***************************************************************/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int i = 0, j = 0;
	char str1[50];
	char str2[20];
	char *p = str1;
	char *q = str2;
	gets(str1);
	gets(str2);
	while(*(p+i) != '\0')
	{
		i++;
	}
	while(*(q+j) != '\0')
	{
		*(p+i+j) = *(q+j);
		j++;
	}
	*(p+i+j) = '\0';
	for(i = 0; *(p+i) != '\0'; i++)
	{
		printf("%c", *(p+i));
	}
	puts("");
	return 0;
}

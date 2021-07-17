/**************************************************************
 * File Name: strcpy_pointfunc.c
 * User 	: Scoaming
 * QQ       : 1033601743
 * Email    : 1033601743@qq.com
 * CTime    : 2021年07月16日 星期五 00时38分22秒
***************************************************************/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *mystrcpy(char *str,const char *dest)
{
	int i = 0;
	while(*(dest+i) != '\0')
	{
		*(str + i) = *(dest + i);
		i++;
	}
	*(str + i) = '\0';

	return str;
}

int main(int argc, char *argv[])
{
	char a[50] = "This is great";
	char b[20] = "Hello World";
	printf("%s\n", mystrcpy(a, b));

	return 0;
}

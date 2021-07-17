/**************************************************************
 * File Name: mystrcat.c
 * User 	: zhouhao
 * QQ       : 
 * Email    : 
 * CTime    : 2021年07月15日 星期四 10时00分57秒
***************************************************************/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *mystrcat(char *str1, char *str2)
{
	char *p = str1;
	char *q = str2;

	while(*p != '\0')
	{
		p++;
	}

	while(*q != '\0')
	{
		*p = *q;
		p++;
		q++;
	}
	*p = '\0';

	return str1;
}




int main(int argc, char *argv[])
{
	char a[50] = "hello";
	char b[20] = " world";
	/*
	char *p = a;
	char *q = b;

	while(*p != '\0')
	{
		p++;
	}

	while(*q != '\0')
	{
		*p = *q;
		p++;
		q++;
	}
	*p = '\0';
	*/

	//mystrcat(a, b);

	printf("%s\n", mystrcat(a, b));


	return 0;
}

/**************************************************************
 * File Name: mystrcat.c
 * User 	: zhouhao
 * QQ       : 
 * Email    : 
 * CTime    : 2021年07月14日 星期三 09时35分33秒
***************************************************************/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	char a[50] = "hello";
	char b[20] = " world";
	int i = 0;
	int j = 0;

	while(b[j] != '\0')
	{
		a[i] = b[j];
		i++;
		j++;
	}
	a[i] = '\0';

	printf("%s\n", a);

	return 0;
}

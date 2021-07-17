/**************************************************************
 * File Name: strcat.c
 * User 	: zhouhao
 * QQ       : 
 * Email    : 
 * CTime    : 2021年07月13日 星期二 15时41分08秒
***************************************************************/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	char a[50] = "hello";
	char b[20] = "asd";

	strcpy(a, b);

	printf("%s\n", a);

	return 0;
}

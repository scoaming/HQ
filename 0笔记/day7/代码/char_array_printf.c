/**************************************************************
 * File Name: char_array_printf.c
 * User 	: zhouhao
 * QQ       : 
 * Email    : 
 * CTime    : 2021年07月13日 星期二 14时02分30秒
***************************************************************/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	char a[50] = "hello";
	
	//scanf("%s", a);

	gets(a);

	char b[50] = {'h', 'e', 'l', 'l', '\0', 'e', 'y', '\0', 'a'};


	//printf("%s\n", b);
	puts(a);


	return 0;
}

/**************************************************************
 * File Name: 14.c
 * User 	: Scoaming
 * QQ       : 1033601743
 * Email    : 1033601743@qq.com
 * CTime    : 2021年07月14日 星期三 04时44分37秒
***************************************************************/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	char a[]="language", *p ;
	p = a; 
	while (*p!='u') 
	{ 
		printf("%c",*p-32); 
		p++ ; 
	}
	puts("");

	return 0;
}

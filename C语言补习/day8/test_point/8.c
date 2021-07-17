/**************************************************************
 * File Name: 8.c
 * User 	: Scoaming
 * QQ       : 1033601743
 * Email    : 1033601743@qq.com
 * CTime    : 2021年07月14日 星期三 01时41分11秒
***************************************************************/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	char *s = "\ta\018bc";
	char *p = "ABC";
	printf("ABC = %p\n", "ABC");
	printf("p = %p\n", p);
	printf("*p = %d\n", *p);
	printf("*s = %d\n", *s);
	printf("&s = %p\n", &s);
	printf("&(*s) = %p\n", &(*s));
	printf("s = %p\n", s);
	puts("");
	//printf("\ta\018bc = %p\n", \ta\018bc);
		for (  ; *s!='\0'; s++)  
		{
			printf("s = %p\n", s);
			printf("%c\n", *s);
			printf("*\n");
		}
		for( ; *p !='\0'; p++)
		{
			printf("%c\n", *p);
		}

	return 0;
}

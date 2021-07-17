/**************************************************************
 * File Name: pointer.c
 * User 	: zhouhao
 * QQ       : 
 * Email    : 
 * CTime    : 2021年07月14日 星期三 11时22分45秒
***************************************************************/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int a = 2;
	int *p = &a;

	char b = 's';
	char *q = &b;

	int c[5] ={1,2,3,4,5};
	int *y = c;

	//int *q = 1000; //error

	//p == &a
	
	printf("&a = %p\n", &a);
	printf("p = %p\n", p);
	printf("p+1 = %p\n", p+1);

	printf("&b = %p\n", &b);
	printf("q = %p\n", q);
	printf("q+1 = %p\n", q+1);

	printf("&c[0] = %p\n", &c[0]);
	printf("c = %p\n", c);
	printf("y = %p\n", y);

	return 0;
}

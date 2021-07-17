/**************************************************************
 * File Name: 4.c
 * User 	: Scoaming
 * QQ       : 1033601743
 * Email    : 1033601743@qq.com
 * CTime    : 2021年07月14日 星期三 01时11分21秒
***************************************************************/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void print_value(int *x)
{  
	printf("%d\n",++*x);
}

int main(int argc, char *argv[])
{
	int a = 25;
	print_value(&a);

	return 0;
}

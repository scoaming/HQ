/**************************************************************
 * File Name: exchange_func.c
 * User 	: Scoaming
 * QQ       : 1033601743
 * Email    : 1033601743@qq.com
 * CTime    : 2021年07月14日 星期三 23时30分14秒
***************************************************************/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int exchange(int *x, int *y);

int main(int argc, char *argv[])
{
	int a = 5, b = 15;
	printf("a = %d b = %d\n", a, b);
	exchange(&a, &b);
	printf("a = %d b = %d\n", a, b);

	return 0;
}

int exchange(int *x, int *y)
{
	int tmp = *x;
	*x = *y;
	*y = tmp;
	return;
}

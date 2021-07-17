/**************************************************************
 * File Name: func.c
 * User 	: Scoaming
 * QQ       : 1033601743
 * Email    : 1033601743@qq.com
 * CTime    : 2021年07月14日 星期三 23时14分43秒
***************************************************************/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int sum(int a, int b);
int ji(int a, int b);

int main(int argc, char *argv[])
{
	int x, y;
	scanf("%d %d", &x, &y);
	printf("x + y = %d\n", sum(x, y));
	printf("x * y = %d\n", ji(x, y));
	return 0;
}

int sum(int a, int b)
{
	int sum = 0;
	sum = a + b;
	return sum;
}
int ji(int a, int b)
{
	int ji = 0;
	ji = a * b;
	return ji;
}

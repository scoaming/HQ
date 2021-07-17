/**************************************************************
 * File Name: huidiao_func.c
 * User 	: Scoaming
 * QQ       : 1033601743
 * Email    : 1033601743@qq.com
 * CTime    : 2021年07月15日 星期四 20时17分54秒
***************************************************************/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int huidiao(int a, int b, char c);

int main(int argc, char *argv[])
{
	int a = 15;
	int b = 5;
	char c = '-';
	int (*p)(int a, int b, char c) = huidiao;
	int d = huidiao(int a, int b, char c);
	printf("%d %c %d = %d\n",a, b, c, d);

	return 0;
}

int huidiao(int a, int b, char c)
{
	return (a c b);
}

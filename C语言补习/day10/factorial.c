/**************************************************************
 * File Name: factorial.c
 * User 	: Scoaming
 * QQ       : 1033601743
 * Email    : 1033601743@qq.com
 * CTime    : 2021年07月15日 星期四 22时40分39秒
***************************************************************/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int factorial(int x)
{
	int sum = 0;
	if(x == 1 || x == 0)
	{
		return 1;
	}
	sum = x * factorial(x-1);
	return sum;
}

int main(int argc, char *argv[])
{
	int i = 5;
	printf("%d! = %d\n", i, factorial(i));

	return 0;
}

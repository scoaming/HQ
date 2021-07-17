/**************************************************************
 * File Name: 1weiarraysum_func.c
 * User 	: Scoaming
 * QQ       : 1033601743
 * Email    : 1033601743@qq.com
 * CTime    : 2021年07月15日 星期四 19时31分30秒
***************************************************************/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int sum(int *p, int N);

int main(int argc, char *argv[])
{
	int a[50] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int num = sizeof(a)/sizeof(int);
	int he = 0;
	he = sum(a, num);
	printf("sum = %d\n", he);

	return 0;
}

int sum(int *p, int N)
{
	int i;
	int sum = 0;
	for(i = 0; i < N; i++)
	{
		sum += *(p+i);
	}
	return sum;
}

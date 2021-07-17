/**************************************************************
 * File Name: sum_2weiarray.c
 * User 	: Scoaming
 * QQ       : 1033601743
 * Email    : 1033601743@qq.com
 * CTime    : 2021年07月12日 星期一 19时51分59秒
***************************************************************/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int i, j;
	int sum = 0;
	int a[2][3];
	for(i = 0; i < 2; i++)
	{
		for(j = 0; j < 3; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	
	for(i = 0; i < 2; i++)
	{
		for(j = 0; j < 3; j++)
		{
			sum += a[i][j];
		}
	}

	for(i = 0; i < 2; i++)
	{
		for(j = 0; j < 3; j++)
		{
			printf("%2d ", a[i][j]);
		}
		puts("");
	};

	printf("sum = %d\n", sum);

	return 0;
}

/**************************************************************
 * File Name: array.c
 * User 	: Scoaming
 * QQ       : 1033601743
 * Email    : 1033601743@qq.com
 * CTime    : 2021年07月11日 星期日 22时33分49秒
***************************************************************/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int i, j;
	int a[3][4];
	int k = 0, sum = 0;
	for(i = 0; i < 3; i++)
	{
		for(j = 0; j < 4; j++)
		{
			a[i][j] = k+j+1;
		}
		k += 4;
	}
	for(i = 0; i < 3; i++)
	{
		for(j = 0; j < 4; j++)
		{
			printf("%2d ", a[i][j]);
		}
		puts("");
	}
	for(i = 0; i < 3; i++)
	{
		for(j = 0; j < 4; j++)
		{
			sum += a[i][j];
		}
	}
	printf("sum = %2d\n", sum);


	return 0;
}

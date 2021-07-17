/**************************************************************
 * File Name: paixu_array.c
 * User 	: Scoaming
 * QQ       : 1033601743
 * Email    : 1033601743@qq.com
 * CTime    : 2021年07月11日 星期日 23时55分21秒
***************************************************************/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int i, j;
	int tmp;
	int a[10];
	for(i = 0; i < 10; i++)
	{
		scanf("%d", &a[i]);
	}
	for(i = 0; i < 9; i++)
	{
		for(j = 0; j < 9-i; j++)
		{
			if(a[j] > a[j+1])
			{
				tmp = a[j];
				a[j] = a[j+1];
				a[j+1] = tmp;
			}
		}
	}
	for(i = 0; i < 10; i++)
	{
		printf("%d ",a[i]);
	}
	puts("");

	return 0;
}

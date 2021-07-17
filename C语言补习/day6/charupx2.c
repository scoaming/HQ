/**************************************************************
 * File Name: charupx2.c
 * User 	: Scoaming
 * QQ       : 1033601743
 * Email    : 1033601743@qq.com
 * CTime    : 2021年07月13日 星期二 05时06分40秒
***************************************************************/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int i, j;
	int k;
	int a[10];
	for(i = 0; i < 10; i++)
	{
		scanf("%d", &a[i]);
	}
	for(i = 1; i < 10; i++)
	{
		k = a[i];
		for(j = i; j > 0; j--)
		{
			if(a[j-1] > k)
			{
				a[j] = a[j-1];
			}
			else
			{
				break;
			}
		}
		a[j] = k;
	}
	for(i = 0; i < 10; i++)
	{
		printf("%d ", a[i]);
	}
	puts("");

	return 0;
}

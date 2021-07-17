/**************************************************************
 * File Name: charupx.c
 * User 	: Scoaming
 * QQ       : 1033601743
 * Email    : 1033601743@qq.com
 * CTime    : 2021年07月12日 星期一 01时39分57秒
***************************************************************/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int i, j;
	int a[10];
	int tmp;
	for(i = 0; i < 10; i++)
	{
		scanf("%d", &a[i]);
	}
	for(i = 0; i < 9; i++)
	{
		for(j = 0; j < i+1; j++)
		{
			if(a[i+1] < a[j])
			{
				tmp = a[i+1];
				for(i; i >= 0; i--)
				{
					a[i+1] = a[i];
				}
				a[j] = tmp;
				break;
			}
		}
	}
	for(i = 0; i < 10; i++)
	{
		printf("%d ", a[i]);
	}
	puts("");

	return 0;
}

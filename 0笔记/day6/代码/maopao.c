/**************************************************************
 * File Name: maopao.c
 * User 	: zhouhao
 * QQ       : 
 * Email    : 
 * CTime    : 2021年07月12日 星期一 15时17分02秒
***************************************************************/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int i = 0;
	int j = 0;
	int tmp;
	int a[10] = {1,22,3,44,5,66,7,88,9,100};

	for(j = 0; j < 9; j++)
	{
		for(i = 0; i < 9-j; i++)
		{
			if(a[i] > a[i+1])
			{
				tmp = a[i];
				a[i] = a[i+1];
				a[i+1] = tmp;
			}
		}
	}

	for(i = 0; i < 10; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");


	return 0;
}

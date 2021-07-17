/**************************************************************
 * File Name: yanghui.c
 * User 	: zhouhao
 * QQ       : 
 * Email    : 
 * CTime    : 2021年07月13日 星期二 13时28分07秒
***************************************************************/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int i, j;
	int a[10][10] = {0};

	
	for(i = 0; i < 10; i++)
	{
		a[i][0] = 1;
		a[i][i] = 1;
	}

	for(i = 0; i < 10; i++)
	{
		for(j = 0; j <= i; j++)

		{
			if((i > 1) && (j > 0))
			{
				a[i][j] = a[i-1][j] + a[i-1][j-1];
			}
		}
	}

	for(i = 0; i < 10; i++)
	{
		for(j = 0; j <= i; j++)
		{
			printf("%-4d", a[i][j]);
		}
		printf("\n");
	}
	

	return 0;
}

/**************************************************************
 * File Name: charu.c
 * User 	: zhouhao
 * QQ       : 
 * Email    : 
 * CTime    : 2021年07月13日 星期二 10时11分56秒
***************************************************************/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int a[7] = {1,22,3,44,5,66,7};


	int i, j;
	int k;

	for(i = 1; i < 7; i++)
	{
		k = a[i];
		for(j = i-1; j>=0 ;j--)
		{
			if(a[j] > k)
			{
				a[j+1] = a[j];
			}
			else
			{
				break;
			}
		}

		a[j+1] = k;
	}

	for(i = 0; i < 7; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");


	return 0;
}

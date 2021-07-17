/**************************************************************
 * File Name: array_t.c
 * User 	: zhouhao
 * QQ       : 
 * Email    : 
 * CTime    : 2021年07月13日 星期二 11时05分38秒
***************************************************************/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int i, j;
	int a[3][3] = {1,2,3,4,5,6,7,8,9};
	int sum = 0;


	for(i = 0; i < 3; i++)
	{
		sum = 0;
		for(j = 0; j < 3; j++)
		{
			sum = sum + a[i][j];
		}
		printf("sum%d = %d\n", i, sum);
	}



	return 0;
}

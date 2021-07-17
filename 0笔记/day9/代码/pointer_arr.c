/**************************************************************
 * File Name: pointer_arr.c
 * User 	: zhouhao
 * QQ       : 
 * Email    : 
 * CTime    : 2021年07月15日 星期四 10时36分48秒
***************************************************************/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int a[2][3] = {1,2,3,4,5,6};
	char *b[3] = {"hello", "asd", "nihao"};

	int *p[2] = {a[0], a[1]};
	int i , j;
	int sum = 0;

	for(i = 0; i < 2; i++)
	{
		sum = 0;
		for(j = 0; j < 3; j++)
		{
			sum = sum + *(*(p+i)+j);
		}
		printf("sum%d = %d\n", i+1, sum);
	}

	for(i = 0; i < 3; i++)
	{
		printf("%s\n", b[i]);
	}

	return 0;
}

/**************************************************************
 * File Name: for.c
 * User 	: zhouhao
 * QQ       : 
 * Email    : 
 * CTime    : 2021年07月09日 星期五 14时45分54秒
***************************************************************/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int i = 100;
	int sum = 0;


	for(i = 1; i <= 100; i++)
	{
		sum = sum + i;
	}
	printf("sum = %d\n", sum);

	return 0;
}

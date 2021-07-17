/**************************************************************
 * File Name: 99.c
 * User 	: zhouhao
 * QQ       : 
 * Email    : 
 * CTime    : 2021年07月09日 星期五 15时46分25秒
***************************************************************/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int i = 0;
	int j = 0;

	for(j = 1; j < 10; j++)
	{

		for(i = 1; i <= j; i++)
		{
			printf("%-2d* %-2d= %-2d  ", j, i, j*i);
		}
		printf("\n");

	}

	return 0;
}

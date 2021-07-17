/**************************************************************
 * File Name: array_print.c
 * User 	: zhouhao
 * QQ       : 
 * Email    : 
 * CTime    : 2021年07月12日 星期一 13时46分01秒
***************************************************************/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	//int a[6] = {1,2,3,4,5,6};
	int a[6];
	int i = 0;
	int sum = 0;

	//printf("%d %d %d %d %d %d\n", a[0], a[1], a[2], a[3], a[4], a[5]);

	for(i = 0; i < 6; i++)
	{
		scanf("%d", &a[i]);
	}

/*
	for(i = 0; i < 6; i++)
	{
		printf("%d ", a[i]);
	}
*/
	
	for(i = 0; i < 6; i++)
	{
		sum = sum + a[i];
	}


	printf("sum = %d\n", sum);

	return 0;
}

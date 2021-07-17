/**************************************************************
 * File Name: t_arr_pointer.c
 * User 	: zhouhao
 * QQ       : 
 * Email    : 
 * CTime    : 2021年07月14日 星期三 14时55分03秒
***************************************************************/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int a[2][3] = {1,2,3,4,5,6};
	
	/*
	printf("&a[0][0]  = %p\n", &a[0][0]);
	printf("a = %p\n", a);
	printf("a+1 = %p\n", a+1);
	*/
#if 0
	int i = 0;
	int *p = &a[0][0];

	for(i = 0; i < 2*3; i++)
	{
		printf("%d ", *(p+i));
	}
	printf("\n");
#endif

	int i, j;
	int (*p)[3] = a;

	for(i = 0; i < 2; i++)
	{
		for(j = 0; j < 3; j++)
		{
			printf("%d ", *(*(p+i)+j));
		}
		printf("\n");
	}


	return 0;
}

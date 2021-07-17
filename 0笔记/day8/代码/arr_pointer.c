/**************************************************************
 * File Name: arr_pointer.c
 * User 	: zhouhao
 * QQ       : 
 * Email    : 
 * CTime    : 2021年07月14日 星期三 14时46分30秒
***************************************************************/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int a[5] = {1,2,3,4,5};
	int *p = a;
	int i = 0;
	int tmp;

	int size = sizeof(a)/sizeof(int);

	for(i = 0; i < 5/2; i++)
	{
		tmp = *(p+i);
		*(p+i) = *(p+size-1-i);
		*(p+size-i-1) = tmp;
	}

	for(i = 0; i < 5; i++)
	{
		printf("%d ", *(p+i));
	}

	printf("\n");


	return 0;
}

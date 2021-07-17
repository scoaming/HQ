/**************************************************************
 * File Name: swap.c
 * User 	: zhouhao
 * QQ       : 
 * Email    : 
 * CTime    : 2021年07月15日 星期四 14时28分51秒
***************************************************************/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


void swap(int *x, int *y)
{
	int tmp;
	tmp = *x;
	*x = *y;
	*y = tmp;
	
	printf("swaping -- *x = %d, *y = %d\n", *x, *y);

	return;
}



int main(int argc, char *argv[])
{
	int a = 2;
	int b = 3;

	printf("before -- a = %d, b = %d\n", a,  b);

	swap(&a, &b);

	printf("after -- a = %d, b = %d\n", a , b);
	
	return 0;
}

/**************************************************************
 * File Name: max.c
 * User 	: zhouhao
 * QQ       : 
 * Email    : 
 * CTime    : 2021年07月09日 星期五 10时33分08秒
***************************************************************/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int a, b, c;
	int max;

	scanf("%d%d%d", &a, &b, &c);

	if(a > b)
	{
		max = a;
		if(max > c)
		{
			printf("max = %d\n", max);
		}
		else
		{
			printf("max = %d\n", c);
		}
	}
	else
	{
		max = b;
		if(max > c)
		{
			printf("max = %d\n", max);
		}
		else
		{
			printf("max = %d\n", c);
		}
	}

	return 0;
}

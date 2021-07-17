/**************************************************************
 * File Name: sanmu.c
 * User 	: zhouhao
 * QQ       : 
 * Email    : 
 * CTime    : 2021年07月07日 星期三 15时10分58秒
***************************************************************/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int max;
	int a = 4;
	int b = 3;

	(a > b)? (max = a):(max = b);
/*
	if(a > b)
	{
		max = a;
	}
	else
	{
		max = b;
	}
*/

	printf("max = %d\n", max);



	return 0;
}

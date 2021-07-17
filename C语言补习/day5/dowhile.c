/**************************************************************
 * File Name: dowhile.c
 * User 	: Scoaming
 * QQ       : 1033601743
 * Email    : 1033601743@qq.com
 * CTime    : 2021年07月08日 星期四 23时06分43秒
***************************************************************/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int i = 1, sum = 0;
	do
	{
		sum += i;
		i++;

	}while(i <= 100);
	printf("1~100 sum = %d\n", sum);

	return 0;
}

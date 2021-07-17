/**************************************************************
 * File Name: 99cheng.c
 * User 	: Scoaming
 * QQ       : 1033601743
 * Email    : 1033601743@qq.com
 * CTime    : 2021年07月09日 星期五 00时26分49秒
***************************************************************/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int i, j;
	for(i = 1; i < 10; i++)
	{
		for(j = 1; j <= i; j++)
		{
			printf("%d * %d = %d ", j, i, j * i);
		}
		puts("");
	}

	return 0;
}

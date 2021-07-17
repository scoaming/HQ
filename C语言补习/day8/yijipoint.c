/**************************************************************
 * File Name: yijipoint.c
 * User 	: Scoaming
 * QQ       : 1033601743
 * Email    : 1033601743@qq.com
 * CTime    : 2021年07月14日 星期三 00时16分52秒
***************************************************************/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int i, j;
	int a[3][3] = {{1, 2, 3}, {4, 5 ,6}, {7, 8, 9}};
	int *p = &a[0][0];
	for(i = 0; i < 3; i++)
	{
		for(j = 0; j < 3; j++)
		{
			printf("%d ", *(p+j+(i*3)));
		}
		puts("");
	}


	return 0;
}

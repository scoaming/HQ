/**************************************************************
 * File Name: erjipoint.c
 * User 	: Scoaming
 * QQ       : 1033601743
 * Email    : 1033601743@qq.com
 * CTime    : 2021年07月14日 星期三 00时27分08秒
***************************************************************/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int i, j;
	int a[3][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
	int (*p)[4] = a;
	for(i = 0; i < 3; i++)
	{
		for(j = 0; j < 4; j++)
		{
			//printf("%2d ", *(*(p+i)+j));
			printf("%2d ", (*(p+i))[j]);
		}
		puts("");
	}

	return 0;
}

/**************************************************************
 * File Name: point_array.c
 * User 	: Scoaming
 * QQ       : 1033601743
 * Email    : 1033601743@qq.com
 * CTime    : 2021年07月14日 星期三 19时28分23秒
***************************************************************/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int a[3][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
	int *b[3] = {a[0], a[1], a[2]};
	int i = 0;
	int j = 0;
	int sum = 0;
	for(i = 0; i < 3; i++)
	{
		sum = 0;
		for(j = 0; j < 4; j++)
		{
		sum += *(b[i]+j);
		//sum += *(*(b+i)+j);
		}
		printf("a[%d] = %d\n", i, sum);
	}

	
	return 0;
}

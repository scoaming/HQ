/**************************************************************
 * File Name: bdx_array.c
 * User 	: Scoaming
 * QQ       : 1033601743
 * Email    : 1033601743@qq.com
 * CTime    : 2021年07月11日 星期日 22时59分19秒
***************************************************************/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int i;
	int a[8];
	int Max, Min;
	int pos_Max = 0;
	int pos_Min = 0;

	for(i = 0; i < 8; i++)
	{
		scanf("%d", &a[i]);
	}
	Max = a[0];
	Min = a[0];

	for(i = 0; i < 8; i++)
	{
		if(Max <= a[i])
		{
			Max = a[i];
			pos_Max = i;
		}
	}

	for(i = 0; i < 8; i++)
	{
		if(Min > a[i])
		{
			Min = a[i];
			pos_Min = i;
		}
	}
	printf("Max = %d pos_Max = a[%d]\n", Max, pos_Max);
	printf("Min = %d pos_Min = a[%d]\n", Min, pos_Min);

	return 0;
}

/**************************************************************
 * File Name: max_min.c
 * User 	: zhouhao
 * QQ       : 
 * Email    : 
 * CTime    : 2021年07月12日 星期一 14时05分48秒
***************************************************************/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int a[10] = {1,45,65,123,9,234,6,234,33,21};
	int i;
	int max, min;
	int pos_max = 0;
	int pos_min = 0;

	max = a[0];
	min = a[0];
	for(i = 0; i < 10; i++)
	{
		if(max < a[i])
		{
			max = a[i];
			pos_max = i;
		}
	}

	for(i = 0; i < 10; i++)
	{
		if(min > a[i])
		{
			min = a[i];
			pos_min = i;
		}
	}
	
	printf("max = %d, pos_max = %d\n", max, pos_max);
	printf("min = %d, pos_min = %d\n", min, pos_min);

	return 0;
}

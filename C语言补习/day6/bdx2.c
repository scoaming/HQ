/**************************************************************
 * File Name: bdx2.c
 * User 	: Scoaming
 * QQ       : 1033601743
 * Email    : 1033601743@qq.com
 * CTime    : 2021年07月12日 星期一 01时04分17秒
***************************************************************/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int i;
	int a[10];
	int p[10] = {0};
	int Max;
	int pos_Max = 0;
	int k = 0;
	for(i = 0; i < 10; i++)
	{
		scanf("%d", &a[i]);
	}

	Max = a[0];
	for(i = 0; i < 10; i++)
	{
		if(Max < a[i])
		{
			k = 0;
			Max = a[i];
			p[k++] = i;
		}
		else if(Max == a[i])
		{
			Max = a[i];
			p[k++] = i;
		}
	}
	
	printf("Max = %d ", Max);
	printf("pos_Max = ");
	for(i = 0; i < k; i++)
	{
		printf("a[%d] ", p[i]);
	}
	puts("");

	return 0;
}

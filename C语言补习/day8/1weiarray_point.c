/**************************************************************
 * File Name: 1weiarray_point.c
 * User 	: Scoaming
 * QQ       : 1033601743
 * Email    : 1033601743@qq.com
 * CTime    : 2021年07月13日 星期二 23时36分29秒
***************************************************************/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int a[10];
	int i;
	int *p = a;
	for(i = 0; i < 10; i++)
	{
		scanf("%d", &a[i]);
	}
	for(i = 0; i < 10; i++)
	{
		printf("%d ", *(p+i));
		//printf("%d ", *(a+i));
		//printf("%d ", p[i]);
		//printf("%d ", a[i]);
	}
	puts("");

	return 0;
}

/**************************************************************
 * File Name: daoxu_point.c
 * User 	: Scoaming
 * QQ       : 1033601743
 * Email    : 1033601743@qq.com
 * CTime    : 2021年07月13日 星期二 23时43分06秒
***************************************************************/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int i;
	int tmp;
	int a[10];
	int *p = a;
	for(i = 0; i < 10; i++)
	{
		scanf("%d", &a[i]);
	}

	for(i = 0; i < 10/2; i++)
	{
		tmp = *(p+i);
		*(p+i) = *(p+9-i);
		*(p+9-i) = tmp;
	}
	for(i = 0; i < 10; i++)
	{
		printf("%d ", *(p+i));
	}
	puts("");


	return 0;
}

/**************************************************************
 * File Name: void_point.c
 * User 	: Scoaming
 * QQ       : 1033601743
 * Email    : 1033601743@qq.com
 * CTime    : 2021年07月14日 星期三 20时15分29秒
***************************************************************/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	void *p = a;
	int i;
	for(i = 0; i < 10; i++)
	{
		printf("%d ", (*(int *)p)++);
	}
	puts("");

	return 0;
}

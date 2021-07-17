/**************************************************************
 * File Name: run2.c
 * User 	: Scoaming
 * QQ       : 1033601743
 * Email    : 1033601743@qq.com
 * CTime    : 2021年07月08日 星期四 21时12分29秒
***************************************************************/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int year;
	printf("请输入年份:\n");
	scanf("%d", &year);
	if(year % 4 == 0)
	{
		if(year % 100 != 0 && year % 400 == 0)
		{
			printf("This is a leap year!\n");
			return 0;
		}
	}
	printf("This is not a leap year!\n");

	return 0;
}

/**************************************************************
 * File Name: run.c
 * User 	: Scoaming
 * QQ       : 1033601743
 * Email    : 1033601743@qq.com
 * CTime    : 2021年07月08日 星期四 19时51分28秒
***************************************************************/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int year;
	printf("请输入年份:\n");
	scanf("%d", &year);
	if(year % 400 == 0)
	{
		printf("%d 是世纪闰年!\n", year);
		return 0;
	}
	if(year % 4 == 0)
	{
	
		if(year % 100 != 0)
			printf("%d 是普通闰年！\n", year);
		else
			printf("%d 不是闰年\n", year);
	}
	else
		printf("%d 不是闰年\n", year);

	return 0;
}

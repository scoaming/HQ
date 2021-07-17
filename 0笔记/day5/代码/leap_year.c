/**************************************************************
 * File Name: leap_year.c
 * User 	: zhouhao
 * QQ       : 
 * Email    : 
 * CTime    : 2021年07月09日 星期五 11时08分54秒
***************************************************************/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int year;
	printf("请输入一个年份:\n");

	scanf("%d", &year);
#if 0
	if(year%400 == 0)
	{
		printf("this year is a leap year！\n");
	}
	else
	{
		if((year%4 == 0) && (year%100 != 0))
		{
			printf("this year is a leap year！\n");
		}
		else
		{
			printf("this year is not a leap year！\n");
		}
	
	}
#endif

	if(((year%4 == 0) && (year%100 != 0))  || (year%400 == 0))
	{
			printf("this year is a leap year！\n");
	}
	else
	{
			printf("this year is not a leap year！\n");
		
	}

	return 0;
}

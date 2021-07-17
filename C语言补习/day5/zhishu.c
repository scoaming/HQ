/**************************************************************
 * File Name: zhishu.c
 * User 	: Scoaming
 * QQ       : 1033601743
 * Email    : 1033601743@qq.com
 * CTime    : 2021年07月08日 星期四 23时51分28秒
***************************************************************/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int i = 2, ch;
	for(i; i <= 1000; i++)
	{
		ch = 2;
		while(i >= ch)
		{
			if(i == 2)
				printf("%d ", i);
		if(i % ch == 0)
			break;
		ch++;
		if(i == ch)
			printf("%d ",i);
		}
	}
	puts("");

	return 0;
}

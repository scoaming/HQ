/**************************************************************
 * File Name: zhishu2.c
 * User 	: Scoaming
 * QQ       : 1033601743
 * Email    : 1033601743@qq.com
 * CTime    : 2021年07月09日 星期五 00时38分06秒
***************************************************************/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int i,num;
	int flag;
	for(i = 2; i <= 1000; i++)
	{
		flag = 0;
		for(num = 2; num < i; num++)
		{
			if(i % num == 0)
			{
				flag = 1;
				break;
			}
		}
			if(flag == 0)
				printf("%d ", i);
	}
		puts("");
	return 0;
}

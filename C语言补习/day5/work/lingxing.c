/**************************************************************
 * File Name: lingxing.c
 * User 	: Scoaming
 * QQ       : 1033601743
 * Email    : 1033601743@qq.com
 * CTime    : 2021年07月09日 星期五 01时28分53秒
***************************************************************/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int x = 1;
	int i, j, z;
	for(i = 4; i > 0; i--)
	{
		for(j = 1; j < 8; j++)
		{
			if(j == i)
			{
				for(z = 1; z < 2*x; z++)
					printf("*");
			}
			else
				printf(" ");
		}
			x++;
		puts("");
	}
	x = 0;
	for(i = 1; i < 4; i++)
	{
		for(j = 1; j < 8; j++)
		{
			if(j == (i+1))
			{
				for(z = 5; z > (2*x); z--)
					printf("*");
			}
			else
				printf(" ");
		}
		x++;
		puts("");
	}
	return 0;
}

/**************************************************************
 * File Name: lingxing.c
 * User 	: zhouhao
 * QQ       : 
 * Email    : 
 * CTime    : 2021年07月12日 星期一 09时26分22秒
***************************************************************/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int i, j, k;

	for(i = 0; i < 4; i++)
	{
		for(j = 3; j > i; j--)
		{
			printf(" ");
		}
		for(k = 0; k < 2*i+1; k++)
		{
			printf("*");
		}
		printf("\n");
	
	}


	for(i = 0; i < 4-1; i++)
	{
		for(j = 0; j <= i; j++)
		{
			printf(" ");
		}
		for(k = 0; k < 5-2*i; k++)
		{
			printf("*");
		}


		printf("\n");
	
	}
	





	return 0;
}

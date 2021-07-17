/**************************************************************
 * File Name: yanghuisj.c
 * User 	: Scoaming
 * QQ       : 1033601743
 * Email    : 1033601743@qq.com
 * CTime    : 2021年07月12日 星期一 20时23分15秒
***************************************************************/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int i, j;
	int a[10][10] = {0};
	int m = 1;
	for(i = 0; i < 10; i++)
	{
		for(j = 0; j < i+1; j++)
		{
			if(j ==0 || i == j)
			{
				a[i][j] = 1;
				printf("%3d ", a[i][j]);
			}
			else
			{
				a[i][j] = a[i-1][j-1]+a[i-1][j];
				printf("%3d ",a[i][j]); 
			}
		}
		puts("");
	}

	return 0;
}

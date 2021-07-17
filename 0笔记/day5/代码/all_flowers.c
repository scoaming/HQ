/**************************************************************
 * File Name: all_flowers.c
 * User 	: zhouhao
 * QQ       : 
 * Email    : 
 * CTime    : 2021年07月09日 星期五 13时56分47秒
***************************************************************/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	
	int num = 100;
	int ge,shi,bai;
	

	while(num < 1000)
	{
		bai = num/100;
		shi = num%100/10;
		ge = num%10;

		if(num == bai*bai*bai + shi*shi*shi + ge*ge*ge)
		{
			printf("%d ", num);
		}
		
		num++;
	}
	printf("\n");

	return 0;
}

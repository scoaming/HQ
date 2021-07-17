/**************************************************************
 * File Name: zhishu.c
 * User 	: zhouhao
 * QQ       : 
 * Email    : 
 * CTime    : 2021年07月09日 星期五 15时11分15秒
***************************************************************/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int num = 0;
	int i = 0;
	
	int flag = 0;

	for(num = 2; num < 1000; num++)
	{
		flag = 0;
		for(i = 2; i < num; i++)
		{
			if(num%i == 0)
			{
				flag = 1;
				break;
			}
		}
		if(flag == 0)
		{
			printf("%d ", num);
		}
				
	}

	return 0;
}

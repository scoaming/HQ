/**************************************************************
 * File Name: b_c_r.c
 * User 	: zhouhao
 * QQ       : 
 * Email    : 
 * CTime    : 2021年07月09日 星期五 16时11分10秒
***************************************************************/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int i = 0;

	for(i = 0; i < 10; i++)
	{
		if(i == 5)
		{
			//break;
			return;
		}

		printf("i = %d\n", i);
	}

	printf("hello\n");

	return 0;
}

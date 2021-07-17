/**************************************************************
 * File Name: do_while.c
 * User 	: zhouhao
 * QQ       : 
 * Email    : 
 * CTime    : 2021年07月09日 星期五 14时16分21秒
***************************************************************/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int sum = 0;
	int i = 1;
	
	do
	{
		sum = sum + i;
		i++;
	}while(i < 101);
	
	printf("sum = %d\n", sum);

	return 0;
}

/**************************************************************
 * File Name: set_reset.c
 * User 	: zhouhao
 * QQ       : 
 * Email    : 
 * CTime    : 2021年07月07日 星期三 15时35分56秒
***************************************************************/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	unsigned int a = 125;

	//将a的第4位清0
	a = a & ~(1<<4);
	printf("a = %d\n", a);

	//将a的第4位置1
	a = a | (1<<4);
	printf("a = %d\n", a);


	return 0;
}





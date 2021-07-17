/**************************************************************
 * File Name: const.c
 * User 	: zhouhao
 * QQ       : 
 * Email    : 
 * CTime    : 2021年07月15日 星期四 10时56分28秒
***************************************************************/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	/*
	const int a = 10;
	int *p = &a;
	
	*p = 12;
	//a = 12;

	printf("a = %d\n", a);
	*/

	int a = 10;
	int b = 20;
	//const int *p = &a;
	//int const *p = &a;
	int * const p = &a;


	//*p = b;
	p = &b;

	printf("*p = %d\n", *p);





	return 0;
}

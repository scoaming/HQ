/**************************************************************
 * File Name: turn.c
 * User 	: zhouhao
 * QQ       : 
 * Email    : 
 * CTime    : 2021年07月07日 星期三 13时50分55秒
***************************************************************/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{

	int a = 2;
	int b = 3;
	int tmp;
	//a = b;
	//b = a;    //error
#if 0	
	tmp = a;
	a = b;
	b = tmp;
#endif

#if 0	
	a ^= b;  // a = a ^ b;   a == 01;
	b ^= a;  // b = a ^ b;   b == 10; 2
	a ^= b;  // a = a ^ b;   a == 11; 3
#endif

	a = a+b; // a == 5
	b = a-b; // b == 2
	a = a-b; // a == 3


	printf("a = %d, b = %d\n", a, b);


	return 0;
}

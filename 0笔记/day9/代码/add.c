/**************************************************************
 * File Name: add.c
 * User 	: zhouhao
 * QQ       : 
 * Email    : 
 * CTime    : 2021年07月15日 星期四 13时33分50秒
***************************************************************/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int d = 10;

int add(int, int, int);


int main(int argc, char *argv[])
{

	int a = 2;
	int b = 3;
	int c = 4;
	//int sum = a+b;
	int sum1 = a+c+d;

	int sum = add(a, b, c);


	printf("sum = %d\n", sum);
	printf("sum1 = %d\n", sum1);
	return 0;
}

int add(int x, int y, int z)
{
	int sum = x+y+z+d;

	return sum;
}

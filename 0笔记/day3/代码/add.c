/**************************************************************
 * File Name: add.c
 * User 	: zhouhao
 * QQ       : 
 * Email    : 
 * CTime    : 2021年07月07日 星期三 10时46分27秒
***************************************************************/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int a = 10;
	int c;
	//c = a++;
	//c = ++a;

	//printf("a = %d  c = %d\n", a, c);


	printf("%d %d %d %d\n", a++, ++a, ++a, a++);    //运算从右到左， 赋值从左到右

	return 0;
}

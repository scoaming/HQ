/**************************************************************
 * File Name: double.c
 * User 	: Scoaming
 * QQ       : 1033601743
 * Email    : 1033601743@qq.com
 * CTime    : 2021年07月16日 星期五 02时16分50秒
***************************************************************/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	float x, y;
	x = 1;
	y = x + 3 / 2;
	printf("%f\n", y);
	y = x + (float)3/(float)2;
	printf("%f\n", y);
	return 0;
}

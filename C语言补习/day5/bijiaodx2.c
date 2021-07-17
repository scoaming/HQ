/**************************************************************
 * File Name: bijiaodx.c
 * User 	: Scoaming
 * QQ       : 1033601743
 * Email    : 1033601743@qq.com
 * CTime    : 2021年07月08日 星期四 19时18分50秒
***************************************************************/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	float a, b, c, Max;
	printf("请输入三个数进行比较:\n");

	scanf("%f %f %f", &a, &b, &c);
	Max = (a > b) ? a : b;
	Max = (Max > c) ? Max : c;
	printf("Max = %.2f\n", Max);

	return 0;
}

/**************************************************************
 * File Name: sanjiao.c
 * User 	: Scoaming
 * QQ       : 1033601743
 * Email    : 1033601743@qq.com
 * CTime    : 2021年07月08日 星期四 01时57分16秒
***************************************************************/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
int main(int argc, char *argv[])
{
	int a, b, c;
	float s, p;
	printf("请分别输入三角形的三条边:\n");
	scanf("%d %d %d", &a, &b, &c);
	//if((a+b)< c || (a+c)< b || (b+c)< a)	
	p = (float)(a + b + c) / 2;
	if((p > a) && (p > b) && (p > c)){
		//printf("p = %.2f\n", p);
		s = sqrt( p* (p-a)* (p-b)* (p-c) );
		printf("三角形的面积为: Area = %.2f\n", s);
	}
	else
		printf("非法三角形！\n");

	return 0;
}

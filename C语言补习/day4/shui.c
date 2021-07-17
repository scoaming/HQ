/**************************************************************
 * File Name: shui.c
 * User 	: Scoaming
 * QQ       : 1033601743
 * Email    : 1033601743@qq.com
 * CTime    : 2021年07月07日 星期三 23时34分05秒
***************************************************************/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
int main(int argc, char *argv[])
{
	int x, a, b, c;
	int i;
	printf("请输入一个三位数:\n");
	scanf("%d", &x);
	a = x / 100;
	b = x % 100 / 10;
	c = x % 10;
	if(a*a*a + b*b*b + c*c*c == x)
		printf("这是一个水仙花数！\n");
	else
		printf("这不是水仙花数。\n");
	
	printf("所有的水仙花数如下:\n");
	for(i = 100; i < 1000; i++)
	{
		a = i / 100;
		b = i % 100 / 10;
		c = i % 10;
		if(pow(a, 3) + pow(b, 3) + pow(c, 3) == i)
			printf("%d ", i);
	}
	puts("");


	return 0;

}

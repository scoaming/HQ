/**************************************************************
 * File Name: zuoye2.c
 * User 	: zhouhao
 * QQ       : 
 * Email    : 
 * CTime    : 2021年07月09日 星期五 09时17分41秒
***************************************************************/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[])
{
	int a, b, c;
	float s,area;


	scanf("%d%d%d", &a, &b, &c);

	s = (a+b+c)/2;

	if((a+b>c) && (a+c>b) && (b+c>a))
	{
		area = sqrt(s * (s-a) * (s-b) * (s-c));
		printf("area = %f\n", area);
	}
	else
	{
		printf("error!\n");
	}




	return 0;
}

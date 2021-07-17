/**************************************************************
 * File Name: zuoye1.c
 * User 	: zhouhao
 * QQ       : 
 * Email    : 
 * CTime    : 2021年07月09日 星期五 08时53分54秒
***************************************************************/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[])
{
	int a,b,c;
	float m;
	float x1,x2;

	printf("plz input a,b,c\n");
	scanf("%d %d %d",&a,&b,&c);

	
	m = b*b-4*a*c;

	if(m < 0)
	{
		printf("该函数无解\n");
	}
	else if(m == 0)
	{
		printf("该函数有一个解\n");
		x1 = (-b+sqrt(b*b-4*a*c))/(2*a);
		printf("x = %0.2f\n",x1);
	}
	else
	{
		printf("该函数有2个解\n");
		x1 = (-b+sqrt(b*b-4*a*c))/(2*a);
		x2 = (-b-sqrt(b*b-4*a*c))/(2*a);
		printf("x1 = %0.2f  x2 = %0.2f",x1,x2);
	}



	return 0;
}

/**************************************************************
 * File Name: equation.c
 * User 	: Scoaming
 * QQ       : 1033601743
 * Email    : 1033601743@qq.com
 * CTime    : 2021年07月08日 星期四 01时15分05秒
***************************************************************/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
int main(int argc, char *argv[])
{
	int a, b, c, br;
	float x1, x2;
	printf("请分别输入一元二次方程的a, b, c的值:\n");
	scanf("%d %d %d", &a, &b, &c);
	getchar();
	printf("一元二次方程为: %d g gx^2 + %dx + %d = 0\n", a, b, c);
	
	br = pow(b, 2) - 4*a*c;
	
	if(br < 0){
		printf("b^2-4*a*c < 0, 无实数根。");
		return 0;
	}
	else if(br > 0){
		x1 = (-b + sqrt(br)) / (2*a);
		x2 = (-b - sqrt(br)) / (2*a);
		printf("x1 = %.2f x2 = %.2f\n", x1, x2);
	}
	else{
		x1 = x2 = -b / (2*a);
		printf("x1 = x2 = %.2f\n", x1);
	}


	return 0;
}

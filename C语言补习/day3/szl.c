/**************************************************************
 * File Name: szl.c
 * User 	: zhouhao
 * QQ       : 
 * Email    : 
 * CTime    : 2021年07月07日 星期三 20时25分37秒
***************************************************************/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	unsigned int x, a;
	int i = 7;
	scanf("%u", &x);
	getchar();
	printf("0X");
	for(i; i >= 0; i--)
	{
		a = x >> (4*i);
		a &= 0xf;
		if(a >= 10)
		{
			a = a - 10 + 'A';
			printf("%c", a);
		}
		else
			printf("%d",a);
	}
	puts("");

}

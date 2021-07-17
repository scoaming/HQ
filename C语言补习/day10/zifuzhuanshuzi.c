/**************************************************************
 * File Name: zifuzhuanshuzi.c
 * User 	: Scoaming
 * QQ       : 1033601743
 * Email    : 1033601743@qq.com
 * CTime    : 2021年07月16日 星期五 00时52分02秒
***************************************************************/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int *shuzi(char *p)
{
	int i = 0;
	int num = 0;
	int *q = &num;
	while(*(p+i) != '\0')
	{
		if(*(p+i) == '-')
		{
			i++;
		}
		num = num*10 + (*(p+i)-'0');
		i++;
	}
		if(*p == '-')
		{
			num *= -1;
		}
	return q;
}

int main(int argc, char *argv[])
{
	char str[50] = "-1234";
	int ch = *shuzi(str);
	printf("%d\n", ch);
	return 0;
}

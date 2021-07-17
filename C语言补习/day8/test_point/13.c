/**************************************************************
 * File Name: 13.c
 * User 	: Scoaming
 * QQ       : 1033601743
 * Email    : 1033601743@qq.com
 * CTime    : 2021年07月14日 星期三 04时24分27秒
***************************************************************/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int s1[50] = {1, 2, 3, 4};
	int s2[20] = {5, 6, 7, 8};
	int i;
	for(i = 0; s1[i] != '\0'; i++)
	{
		printf("%d", s1[i]);
	}
	puts("");
	int *p1;
	int *p2;
	p1 = s1, p2 = s2;
	*(p1+1) = *(p2+1);
	for(i = 0; s1[i] != '\0'; i++)
	{
		printf("%d", s1[i]);
	}
	puts("");

	while(*p1++ = *p2++);
	for(i = 0; s1[i] != '\0'; i++)
	{
		printf("%d", s1[i]);
	}
	puts("");
	

	return 0;
}

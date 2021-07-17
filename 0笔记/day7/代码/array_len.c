/**************************************************************
 * File Name: array_len.c
 * User 	: zhouhao
 * QQ       : 
 * Email    : 
 * CTime    : 2021年07月13日 星期二 14时59分35秒
***************************************************************/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int i = 0;
	int len = 0;
	int tmp = 0;
	char a[50] = {0};

	scanf("%s", a);
	
/*
	while(a[i] != '\0')
	{
		len++;
		i++;
	}
*/
	len = strlen(a);
	printf("len = %d\n", len);

	for(i = 0; i < len/2; i++)
	{
		tmp = a[i];
		a[i] = a[len-i-1];
		a[len-i-1] = tmp;
	}
	
	printf("%s\n", a);

	return 0;
}

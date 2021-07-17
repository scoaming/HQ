/**************************************************************
 * File Name: char_array.c
 * User 	: zhouhao
 * QQ       : 
 * Email    : 
 * CTime    : 2021年07月13日 星期二 13时44分46秒
***************************************************************/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	char a[6] = {'h', 'e', 'l', 'l'};
	char b[50] = {0};

	char c[] = "hello";

	int i = 0;


	for(i = 0; i < 6; i++)
	{
		printf("%c", a[i]);
	}
	printf("\n");

	int size = sizeof(c);

	printf("size = %d\n", size);


	return 0;
}

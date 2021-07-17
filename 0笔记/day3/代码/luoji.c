/**************************************************************
 * File Name: luoji.c
 * User 	: zhouhao
 * QQ       : 
 * Email    : 
 * CTime    : 2021年07月07日 星期三 11时24分25秒
***************************************************************/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int a = 2;
	int b = 3;
	int c = 4;
/*
	if((a < b) && (c < b))
	{
		printf("yes!\n");
	}
	else
	{
		printf("no!\n");
	}
*/
	if(!(a < b))
	{
		printf("yes!\n");
	}
	else
	{
		printf("no!\n");
	}

	return 0;
}

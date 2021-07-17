/**************************************************************
 * File Name: char_pointer.c
 * User 	: zhouhao
 * QQ       : 
 * Email    : 
 * CTime    : 2021年07月15日 星期四 10时10分41秒
***************************************************************/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	
	char *p = "hello";
	
	strcpy(p, "zello");

	printf("%c\n", *(p+1));

	printf("%c\n", *p);


	return 0;
}

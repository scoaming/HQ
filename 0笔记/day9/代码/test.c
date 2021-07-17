/**************************************************************
 * File Name: test.c
 * User 	: zhouhao
 * QQ       : 
 * Email    : 
 * CTime    : 2021年07月15日 星期四 09时19分48秒
***************************************************************/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	char *s = "abcde";

	s += 2;
	printf("%p\n", s);
	printf("%d\n", s);



	return 0;
}

/**************************************************************
 * File Name: 7.c
 * User 	: Scoaming
 * QQ       : 1033601743
 * Email    : 1033601743@qq.com
 * CTime    : 2021年07月12日 星期一 04时37分38秒
***************************************************************/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	char *s = "AAA";
	printf("%s\n", s);
	s[0] = 'B';
	printf("%s\n", s);

	return 0;
}

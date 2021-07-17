/**************************************************************
 * File Name: 9.c
 * User 	: Scoaming
 * QQ       : 1033601743
 * Email    : 1033601743@qq.com
 * CTime    : 2021年07月14日 星期三 02时41分06秒
***************************************************************/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	char s[5] = {'A','B','C','D','E'};
	char r[5] = "ABCD";
	char t[5] = "FEGHI";
	char q[5] = {"ABCDE"};
	printf("%s\n", s);
	//printf("%s\n", r);
	printf("%s\n", q);

	char *k; 
	k = "QWERTY";
	for( ; *k != '\0'; k++)
	{
		printf("%c",*k);
	}
	puts("");
	return 0;
}

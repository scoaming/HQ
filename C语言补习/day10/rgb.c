/**************************************************************
 * File Name: rgb.c
 * User 	: Scoaming
 * QQ       : 1033601743
 * Email    : 1033601743@qq.com
 * CTime    : 2021年07月16日 星期五 01时45分18秒
***************************************************************/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	char *ch[4]={"red","green","blue"}; 
	int i=0; 
	while (ch[i]) 
	{ 
		putchar(ch[i][0]); 
		i++;
	} 
	puts("");
	return 0;
}

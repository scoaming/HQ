/**************************************************************
 * File Name: goto.c
 * User 	: zhouhao
 * QQ       : 
 * Email    : 
 * CTime    : 2021年07月09日 星期五 16时02分11秒
***************************************************************/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	
	printf("hello\n");
	

	printf("aaaaa\n");

	
	return;

	printf("bbbbbb\n");
flag:	
	printf("ccccc\n");
	printf("ddddd\n");

	goto flag;


	return 0;



}

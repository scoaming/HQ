/**************************************************************
 * File Name: rand.c
 * User 	: zhouhao
 * QQ       : 
 * Email    : 
 * CTime    : 2021年07月13日 星期二 09时03分23秒
***************************************************************/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	srand((unsigned)time(NULL));

	printf("倒数3个数\n");
	int i = rand()%8+1;
	sleep(3);
	int j = rand()%10+1;

	printf("i = %d, j = %d\n", i, j);


	return 0;
}

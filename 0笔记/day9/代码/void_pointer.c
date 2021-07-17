/**************************************************************
 * File Name: void_pointer.c
 * User 	: zhouhao
 * QQ       : 
 * Email    : 
 * CTime    : 2021年07月15日 星期四 11时16分48秒
***************************************************************/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int a[5] = {1,2,3,4,5};
	void *p = a;
		
	int i = 0;
	for(i = 0; i < 5; i++)
	{
		printf("%d ", *((int *)p+i));
	}
	printf("\n");

	return 0;
}

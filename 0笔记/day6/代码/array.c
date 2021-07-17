/**************************************************************
 * File Name: array.c
 * User 	: zhouhao
 * QQ       : 
 * Email    : 
 * CTime    : 2021年07月12日 星期一 10时38分23秒
***************************************************************/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int f[50];

int main(int argc, char *argv[])
{
	//int a,b,c,d;

	int array[50];   //定义了一个名为array的数组。可以存放50个char类型的数据
	int b[5] = {1,2,3};
	int c[] = {1,2,3,4,5};
	int size = 0;

	array[0] = 1;  //数组的第一个元素
	array[49] = 123;  //数组array的最后一个元素

	printf("array[1] = %d\n", f[49]);

	printf("b[0] = %d,  b[3] = %d\n", b[0], b[3]);

	size = sizeof(c);

	printf("size = %d\n", size);

	return 0;
}

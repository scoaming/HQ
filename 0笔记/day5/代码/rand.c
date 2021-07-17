/**************************************************************
 * File Name: rand.c
 * User 	: zhouhao
 * QQ       : 
 * Email    : 
 * CTime    : 2021年07月09日 星期五 16时18分01秒
***************************************************************/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	srand((unsigned)time(NULL));  //获取随机的时间种子


	int num = rand()%10;
	
	printf("num =%d\n", num);

	return 0;
}

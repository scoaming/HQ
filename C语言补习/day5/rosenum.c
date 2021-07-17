/**************************************************************
 * File Name: rosenum.c
 * User 	: Scoaming
 * QQ       : 1033601743
 * Email    : 1033601743@qq.com
 * CTime    : 2021年07月08日 星期四 22时48分32秒
***************************************************************/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
int main(int argc, char *argv[])
{
	int i = 1000;
	int qian, bai, shi, ge;
	while(i < 10000)
	{
		qian = i / 1000;
		bai = i % 1000 / 100;
		shi = i % 100 / 10;
		ge = i % 10;
			
		if(pow(qian, 4) + pow(bai, 4) + pow(shi, 4) + pow(ge, 4) == i)
			printf("%d ", i);
		i++;
	}
	puts("");

	return 0;
}

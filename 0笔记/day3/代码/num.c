/**************************************************************
 * File Name: num.c
 * User 	: zhouhao
 * QQ       : 
 * Email    : 
 * CTime    : 2021年07月07日 星期三 10时36分53秒
***************************************************************/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int a = 2345;

	int qian, bai, shi, ge;
	
	qian = a/1000; 		    //得到千位
	bai = a%1000/100;   	//得到百位
	shi = a%1000%100/10; 	//得到十位
	ge = a%10;           	// 得到个位

	printf("qian = %d bai = %d shi = %d  ge = %d \n", qian, bai, shi, ge);

	return 0;
}

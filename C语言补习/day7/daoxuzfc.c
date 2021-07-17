/**************************************************************
 * File Name: zifuchuan.c
 * User 	: Scoaming
 * QQ       : 1033601743
 * Email    : 1033601743@qq.com
 * CTime    : 2021年07月12日 星期一 23时42分17秒
***************************************************************/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int i;
	char a[255] = "0";
	int num = 0;
	char tmp;
	printf("请输入一个字符串:\n");
	gets(a);
	for(i = 0; i < 255; i++)
	{
		if(a[i] != '\0')
		{
			num++;	
		}
	}
	printf("字符串的有效字符长度为: %d\n", num);

	//将字符串倒序存储
	for(i = 0; i < num/2; i++)
	{
		tmp = a[num-1-i]; 
		a[num-1-i] = a[i];
		a[i] = tmp;
	}
	puts(a);

	return 0;
}

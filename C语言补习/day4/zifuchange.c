/**************************************************************
 * File Name: zifuchange.c
 * User 	: Scoaming
 * QQ       : 1033601743
 * Email    : 1033601743@qq.com
 * CTime    : 2021年07月07日 星期三 23时00分50秒
***************************************************************/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	char a;
	printf("请输入一个数据:\n");
	while(1)
	{
		scanf("%c",&a);
		getchar();

		if(a >=65 && a <= 'Z')
			printf("%c\n",a+' ');

		else if(a >= 97 && a < 123)
			printf("%c\n", a - ' ');
		
		else
			printf("无法识别的数据\n");
	}
	return 0;
}

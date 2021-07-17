/**************************************************************
 * File Name: fput.c
 * User 	: Scoaming
 * QQ       : 1033601743
 * Email    : 1033601743@qq.com
 * CTime    : 2021年07月11日 星期日 07时17分38秒
***************************************************************/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int c;

	while(1)
	{
		c = fgetc(stdin); //从键盘读取一个字符

		fputc(c, stdout);
		//if( (c >= '0') && (c <= '9') ) fputc(c, stdout); //若输入的是数字，输出
		//puts("");
		//fputc('\n', stdout);

		//if(c == '\n') break; //若遇到换行符，跳出循环
	}

	return 0;
}

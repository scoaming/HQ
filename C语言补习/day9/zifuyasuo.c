/**************************************************************
 * File Name: zifuyasuo.c
 * User 	: Scoaming
 * QQ       : 1033601743
 * Email    : 1033601743@qq.com
 * CTime    : 2021年07月15日 星期四 02时20分09秒
***************************************************************/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	char str[50] = "qqqwwwwerrrrr";
	int i = 0;
	int num;
	while(str[i] != '\0')
	{
		if(str[i] == str[i+1])
		{
			num = 1;
			while(str[i] == str[i+1])
			{	
				num++;
				i++;
			}
			printf("%d", num);
			printf("%c",str[i]);
		}
		else
		{
			printf("%d",1);
			printf("%c", str[i]);
		}
		i++;
	}
	puts("");

	return 0;
}

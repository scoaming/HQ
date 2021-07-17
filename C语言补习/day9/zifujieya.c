/**************************************************************
 * File Name: zifujieya.c
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
	char str[50] = "3d4f5g1h";
	int i = 0, j = 0;
	while(str[i] != '\0')
	{
		if(str[i] > '0' && str[i] <= '9')
		{
			//printf("%d\n",(int)(str[i] - 48));
			for(j = 0; j < (str[i]-48); j++)
			{
				printf("%c", str[i+1]);
			}
		}

		i++;
	}
	puts("");

	return 0;
}

/**************************************************************
 * File Name: dancidaozhi.c
 * User 	: Scoaming
 * QQ       : 1033601743
 * Email    : 1033601743@qq.com
 * CTime    : 2021年07月15日 星期四 04时48分35秒
***************************************************************/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int i = 0, j = 0, k = 0;
	int a[50] = {0}; //用来存放每个单词第一个字母的下标
	char str[50] = "i love you";
	char copy[50] = "0"; //用来存放倒置后的字符串
	int num = 0; //定义一个变量用来存放空格的个数
	a[k] = i; //将第一个字母的下标直接赋值给存放下标的数组
	k++;
	while(str[i] != '\0')
	{
		if(str[i] == ' ')
		{
			a[k++] = i+1; // 存下标
			num++; // 记空格的个数
		}
		i++;
	}
#if 0
	printf("k = %d\n", k-1);
	printf("num = %d\n", num);
	for(i = 0; i < k; i++)
	{
		printf("%d ", a[i]);
	}
	puts("");
#endif
	for(i = 0; i < num+1; i++) // 循环次数为单词的个数 num + 1
	{
		k = 0;
		for(i; str[(a[num - i])+k] != '\0' && str[(a[num -i])+k] != ' '; k++)
		{
			//printf("%c",str[a[num - i]+k]);
			copy[j++] = str[a[num - i]+k];
		}
		//printf(" ");
		copy[j++] = ' ';
	}
	copy[j] = '\0';
	printf("%s\n", copy);
	//puts("");

	return 0;
}

/*===============================================================
*   Copyright (C) 2021 All rights reserved.
*   
*   文件名称：array_strcmp.c
*   创 建 者：刘超
*   创建日期：2021年07月13日
*   描    述：
*
*   更新日志：
*
================================================================*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <strings.h>

int main()
{
	int i = 0;
	int j = 0;
	int len1 = 0;
	int len2 = 0;
	int sum = 0;
	char str1[50] = "hello";
	char str2[50] = "word!";

	while( str1[i] != '\0')
	{
		len1++;
		i++;
	}
	while( str2[j] != '\0')
	{
		len2++;
		j++;
	}
	//printf("len1 = %d len2 = %d\n",len1,len2);
	printf("str1 = %s str2 = %s\n",str1,str2);

	if(len1 == len2)
	{
		for(i=0;i<len1;i++)
		{
			if(str1[i]==str2[i])
			{
				sum++;
			}
		}
		if(sum == len1)
		{
			printf("str1 = str2\n");
		}
	}

	if(len1<len2)
	{
		for(i=0;i<len1;i++)
		{
			if(str1[i]>str2[i])
			{
				printf("str1 >str2\n");
				break;
			}
			else if(str1[i]<str2[i])
			{
				printf("str1 < str2\n");
				break;
			}
		}
	}
	else if(len1 == len2)
	{
		for(i=0;i<len1;i++)
		{
			if(str1[i]>str2[i])
			{
				printf("str1 >str2\n");
				break;
			}
			else if(str1[i]<str2[i])
			{
				printf("str1 < str2\n");
				break;
			}
		}
	}
	else
	{
		for(i=0;i<len2;i++)
		{
			if(str1[i]>str2[i])
			{
				printf("str1 >str2\n");
				break;
			}
			else if(str1[i]<str2[i])
			{
				printf("str1 < str2\n");
				break;
			}
		}
	}

	return 0;
}

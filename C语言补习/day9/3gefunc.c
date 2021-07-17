/**************************************************************
 * File Name: daoxuzfc_func.c
 * User 	: Scoaming
 * QQ       : 1033601743
 * Email    : 1033601743@qq.com
 * CTime    : 2021年07月15日 星期四 00时13分25秒
***************************************************************/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *daoxu(char *p);
char *mystrcat(char *a, char *b);
char *mystrcpy(char *a, char *b);

int main(int argc, char *argv[])
{
	char str[50] = "GFEDCBA";
	//倒置字符串
	daoxu(str);
	printf("%s\n", str);
	char str2[20] = "HIJKLMN";
	//连接字符串
	printf("%s\n", mystrcat(str, str2));
	//拷贝字符串
	
	printf("%s\n", mystrcpy(str, str2));

	return 0;
}

char *daoxu(char *p)
{
	int leng = 0;
	int i;
	char tmp;
	while(*(p+leng) != '\0')
	{
		leng++;
	}
	for(i = 0; i < leng/2; i++)
	{
		tmp = *(p+i);
		*(p+i) = *(p+leng-i-1);
		*(p+leng-i-1) = tmp;
	}
	return;

}

char *mystrcat(char *a, char *b)
{
	int i = 0, j = 0;
	while(*(a+i) != '\0')
	{
		i++;
	}
	while(*(b+j) != '\0')
	{
		*(a+i++) = *(b+j++);
	}
	*(a+i) = '\0';
	return a;
}

char *mystrcpy(char *a, char *b)
{
	int j = 0;
	while(*(b+j) != '\0')
	{
		*(a+j++) = *(b+j++);
	}
	*(a+j) = '\0';
	return a;
	
}

/**************************************************************
 * File Name: myturn.c
 * User 	: zhouhao
 * QQ       : 
 * Email    : 
 * CTime    : 2021年07月15日 星期四 16时01分33秒
***************************************************************/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#if 0
char *myturn(char *str)
{
	int len = strlen(str);
	int i = 0;
	char tmp;
	char *p = str;
	
	for(i = 0; i < len/2; i++)
	{
		tmp = *(p+i);
		*(p+i) = *(p+len-i-1);
		*(p+len-i-1) = tmp;
	}

	return str;
}
#endif
void myturn(char *str)
{
	int len = strlen(str);
	int i = 0;
	char tmp;
	char *p = str;
	
	for(i = 0; i < len/2; i++)
	{
		tmp = *(p+i);
		*(p+i) = *(p+len-i-1);
		*(p+len-i-1) = tmp;
	}
}

int main(int argc, char *argv[])
{
	char a[50] = "hello";
	
	scanf("%s", a);
	
	myturn(a);

	printf("%s\n", a);

	return 0;
}

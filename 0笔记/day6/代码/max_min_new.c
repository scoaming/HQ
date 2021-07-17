/**************************************************************
 * File Name: max_min_new.c
 * User 	: zhouhao
 * QQ       : 
 * Email    : 
 * CTime    : 2021年07月12日 星期一 14时38分46秒
***************************************************************/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int i = 0;
	int max = 0;
	int k = 0;
	int pos[10] = {0};
	int a[10] = {33, 22, 1, 123, 54, 123, 76, 234, 123, 123};
	

	max= a[0];
	for(i = 0; i < 10; i++)
	{
		if(max < a[i])
		{
			k = 0;
			max = a[i];
			pos[k++] = i;
		}
		else if(max == a[i])
		{
			max = a[i];
			pos[k++] = i;
		}
	}

	printf("max = %d\n", max);
	for(i = 0; i < k; i++)
	{
		printf("%d ", pos[i]);
	}
	printf("\n");
	
	return 0;
}

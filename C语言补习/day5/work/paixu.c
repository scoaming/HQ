/**************************************************************
 * File Name: paixun.c
 * User 	: Scoaming
 * QQ       : 1033601743
 * Email    : 1033601743@qq.com
 * CTime    : 2021年07月11日 星期日 02时53分23秒
***************************************************************/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int i, j, tmp;
	int N;
	printf("请问要进行多少个数的比较: ");
	scanf("%d", &N);
	int a[N];
	for(i = 0; i < N; i++)
	{
		scanf("%d", &a[i]);
	}
	for(i = 0; i < N-1; i++){
		for(j = i; j < N-1; j++){
			if(a[i] > a[j+1]){
				tmp = a[i];
				a[i] = a[j+1];
				a[j+1] = tmp;
			}
		}
	}
	printf("从小到大排序: \n");
	for(i = 0; i < N; i++)
	{
		printf("%d ", a[i]);
	}
	puts("");
	return 0;
}

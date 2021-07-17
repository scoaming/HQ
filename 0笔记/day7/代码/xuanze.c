/**************************************************************
 * File Name: xuanze.c
 * User 	: zhouhao
 * QQ       : 
 * Email    : 
 * CTime    : 2021年07月13日 星期二 09时19分36秒
***************************************************************/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
 int a[10]={1,3,4,6,12,5,2,4,1,8};
 int i;
 int j;
 int temp;
 int k;
 for(i=0;i<9;i++)
 {
	 k=i;
	 for(j=i+1;j<10;j++)
	 {
		 if(a[k]>a[j])
		 {
			 k = j;  
		 }
	 }
	 temp=a[k];
	 a[k]=a[i];
	 a[i]=temp;

 }
 for(i=0;i<10;i++)
 {
	 printf("%d ",a[i]);
 }

 printf("\n");
return 0;
}

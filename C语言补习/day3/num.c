#include<stdio.h>
int main(int argc, char *argv[])
{
	int x, a, b, c, d;
	printf("请输入一个四位数:\n");
	scanf("%d",&x);
	getchar();
	a = x / 1000;
	b = (x % 1000) / 100;
	c = (x % 100) / 10;
	d = x % 10;
	printf("a = %d\n",a);
	printf("b = %d\n",b);
	printf("c = %d\n",c);
	printf("d = %d\n",d);
	return 0;
}


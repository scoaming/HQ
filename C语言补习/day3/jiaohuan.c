#include<stdio.h>
int main(int argc, char * argv[])
{
	int a = 3, b = 5;
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
	printf("a = %d, b = %d\n",a, b);
	return 0;
}

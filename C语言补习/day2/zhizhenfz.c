#include<stdio.h>
int main(int argc, char *argv[])
{
	int n, *p, *q, m;
	n = 10;
	m = 20;
	p = &n;
	printf("n = %d\n",*p);
	*p = m;
	printf("n = %d\n",n);
	return 0;
}

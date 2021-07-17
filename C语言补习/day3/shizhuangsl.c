#include <stdio.h>
int main(int argc, char *argv[])
{
	int x;
	int a, b, c, d, e, f, g, h;

	printf("请输入一个10进制数:\n");
	scanf("%d", &x);
	getchar();
	printf("转换为16进制后:\n0X");
	
	a = x >> 28;
	if(a >= 10)
	{
		a = a - 10 + 'A';
		printf("%c",a);
	}
	else
		printf("%d",a);
	
	b = 0xf & (x >> 24);
	if(b >= 10){
		b = b - 10 + 'A';
		printf("%c",b);
	}
	else
		printf("%d",b);
	
	c = 0xf & (x >> 20);
	if(c >= 10){
		c = c - 10 + 'A';
		printf("%c",c);
	}
	else
		printf("%d",c);

	d = 0xf & (x >> 16);
	if(d >= 10){
		d = d - 10 + 'A';
		printf("%c",d);
	}
	else
		printf("%d",d);
	
	e = 0xf & (x >> 12);
	if(e >= 10){
		e = e - 10 + 'A';
		printf("%c",e);
	}
	else
		printf("%d",e);

	f = 0xf & (x >> 8);
	if(f >= 10){
		f = f - 10 + 'A';
		printf("%c",f);
	}
	else
		printf("%d",f);

	g = 0xf & (x >> 4);
	if(g >= 10){
		g = g - 10 + 'A';
		printf("%c",g);
	}
	else
		printf("%d",g);

	h = 0xf & x;
	if(h >= 10)
	{
		h =h - 10 + 'A';
		printf("%c", h);
	}
	else
		printf("%d", h);
	puts("");


	return 0;
}

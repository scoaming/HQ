#include<stdio.h>
int main(int argc, char * argv[])
{
	char X;
#if 1
	printf("请输入一个字母：\n");
	while(1)
	{
		scanf("%c",&X);
		if(X < 'a')
			X = X + ' ';
		else
			X = X - ' ';
		printf("转化后: %c\n",X);
		getchar();
	}
#endif
	return 0;
}


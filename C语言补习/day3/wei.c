#include <stdio.h>
int main()
{
	unsigned int a = 0b10011011; // 定义一个无符号的二进制数
	printf("a = %d\n", a);  // 显出在屏幕上
	a = a | (1 << 2);		// 把这个无符号数的第三位置1
	printf("a = %d\n", a);
	a &= ~(1 << 3);         // 在上面的结果中在把第四位置0
	printf("a = %d\n", a);
	return 0;
}

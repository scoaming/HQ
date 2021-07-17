/**************************************************************
 * File Name: switch.c
 * User 	: Scoaming
 * QQ       : 1033601743
 * Email    : 1033601743@qq.com
 * CTime    : 2021年07月08日 星期四 21时37分20秒
***************************************************************/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int score, H;
	printf("请输入成绩:\n");
	scanf("%d", &score);
	H = score / 10;
	switch (H)
	{
		case 10:
		case 9: H = 'A'; break;
		case 8: H = 'B'; break;
		case 7: H = 'C'; break;
		case 6: H = 'D'; break;
		default:
				H = 'E'; 
	}
	printf("rank =  %c\n", H);
	return 0;
}

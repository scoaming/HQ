/**************************************************************
 * File Name: coin.c
 * User 	: Scoaming
 * QQ       : 1033601743
 * Email    : 1033601743@qq.com
 * CTime    : 2021年07月09日 星期五 23时23分52秒
 ***************************************************************/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	printf("欢迎来到猜硬币游戏游戏体验!\n");
	printf("游戏规则：‘1’代表正面，‘0’代表反面，’-1‘代表退出游戏\n");
	int i, num;
	srand((unsigned)time(NULL));
	printf("请输入：\n");
	scanf("%d", &i);
	while(i != -1)
	{
		if(i != 1 && i != 0 && i != -1){
			printf("无效字符，请重新输入:\n");
			goto CX;
		}
		num = rand() % 2;
		printf("结果为: %d\n", num);

		if(num == i)
			printf("恭喜你答对了！\n");
		else
			printf("很遗憾你没有答对\n");
CX:
		scanf("%d", &i);
	}

	printf("欢迎下次再来！\n");

	return 0;
}

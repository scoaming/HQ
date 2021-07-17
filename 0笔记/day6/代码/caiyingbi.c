/**************************************************************
 * File Name: caiyingbi.c
 * User 	: zhouhao
 * QQ       : 
 * Email    : 
 * CTime    : 2021年07月12日 星期一 10时01分58秒
***************************************************************/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int num;
	int coin;

	srand((unsigned)time(NULL)); //获取随即时间种子，每一秒获取的随机数不同

	printf("欢迎来到猜硬币小游戏:\n");

	while(1)// for(;;)
	{
		printf("请输入硬币的正反面 1 -- '正面' 0 -- '反面'  -1 -- '退出'\n");

		//预测硬币正反面
		scanf("%d", &num);
		if(num == -1)
		{
			printf("欢迎下次再来!\n");
			return;
		}

		//抛硬币
		coin = rand()%60;
		printf("coin = %d\n", coin);

		//比较判断
		if(num == coin)
		{
			printf("you win!\n");
		}
		else
		{
			printf("you lose!\n");
		}

	}

	return 0;
}

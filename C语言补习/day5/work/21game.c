/**************************************************************
 * File Name: 21game.c
 * User 	: Scoaming
 * QQ       : 1033601743
 * Email    : 1033601743@qq.com
 * CTime    : 2021年07月10日 星期六 00时25分02秒
***************************************************************/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	printf("欢迎进入21点小游戏～\n");
	printf("游戏规则：首先随机发一张底牌，1-10代表对应的点数, 'J' 'Q' 'K 代表半点。\n");
	printf("然后进行发牌, 在发牌前可以选择要或者不要，总牌数最大点为21，超过21点则为失败。");
	printf("输入‘1’表示要牌，输入‘0‘表示不要。\n");
	printf("游戏开始：\n");
	int i, num;
	float sum; 
	srand((unsigned)time(NULL));
A:  
	sum = 0;
	num = rand()%13 + 1;
	if(num > 10){
		switch(num){
			case 11: 
				printf("底牌为: 'Q'\n"); sum += 0.5; break;
			case 12:
				printf("底牌为: 'Q'\n"); sum += 0.5; break;
			case 13:
				printf("底牌为: 'Q'\n"); sum += 0.5; break;
		}
	}else{
		printf("底牌为: %d\n", num);
		sum += num;
	}
		printf("是否继续要牌: \n");
		scanf("%d", &i);
	while(i != -1){

		if(i == 0){
			printf("最终点数为: %.1f\n", sum);
			printf("请选择再玩一次或是退出游戏(1代表在玩一次，0代表退出): \n");
			scanf("%d", &i);
			if(i == 1){
				goto A;
			}
			else if(i == 0){
				goto B;
			}
		}

		num = rand()%13 + 1;
		if(num > 10){
			switch(num){
				case 11: 
					printf("发牌: 'J'\n"); break;
				case 12:
					printf("发牌: 'Q'\n"); break;
				case 13:
					printf("发牌: 'K'\n"); break;
			}
			sum += 0.5;
		}else{
			printf("发牌: %d\n", num);
			sum += num;
		}
			printf("当前牌数: %.1f\n", sum);
		
			if(sum > 21){
				printf("超出21点,游戏失败\n");
				printf("请选择再玩一次或是退出游戏(1代表在玩一次，0代表退出): \n");
				scanf("%d", &i);
				if(i == 1){
					goto A;
				}
				else if(i == 0){
					goto B;
				}
			}

			printf("请选择要牌(1),或者不要(0): \n");
			scanf("%d", &i);
	}
B:
	printf("欢迎下次再来！\n");
	return 0;
}

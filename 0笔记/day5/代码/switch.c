/**************************************************************
 * File Name: switch.c
 * User 	: zhouhao
 * QQ       : 
 * Email    : 
 * CTime    : 2021年07月09日 星期五 11时27分18秒
***************************************************************/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	printf("欢迎来到夺宝幸运星之天龙八部!\n");

	int money;
	scanf("%d", &money);

	switch(money)
	{
		case 10:
				printf("谢谢回顾~\n");  //break;
		case 100:
				printf("菜刀 get!\n");  //break;
		case 1000:
				printf("凌波微步! get!\n");  //break;
		case 50000:
				printf("葵花宝典 get！\n");  //break;
		default:
			printf("如需变强,请速速充值!\n");  //break;
	}



	return 0;
}

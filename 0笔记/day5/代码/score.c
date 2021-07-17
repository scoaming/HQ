/**************************************************************
 * File Name: score.c
 * User 	: zhouhao
 * QQ       : 
 * Email    : 
 * CTime    : 2021年07月09日 星期五 13时27分49秒
***************************************************************/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int score;
	scanf("%d", &score);

	switch(score/10)
	{
		case 10:
			printf("yyds！\n");  break;
		case 9:
			printf("A\n");   break;
		case 8:
			printf("B\n");   break;
		case 7:
			printf("C\n");   break;
		case 6:
			printf("D\n");   break;
		default:
			printf("不及格！\n");  			
	}

	return 0;
}

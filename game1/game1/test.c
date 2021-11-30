#define _CRT_SECURE_NO_WARNINGS
#include"game.h"
void menu()//菜单页面
{
	printf("**************************************************\n");
	printf("*****  1.paly  *******************  0.exit  ******\n");
	printf("**************************************************\n");

}
void game()//游戏算法
{
	char ret;
	char board[ROW][COL] = { 0 };
	initalboard(board,ROW,COL);
	displayboard(board, ROW, COL);
	while (1)//玩家电脑依次下棋
	{
		playermove(board, ROW, COL);
		displayboard(board, ROW, COL);
		ret = IsWin(board,ROW,COL);
		if (ret != 'c')
		{
			break;
		}
		computermove(board,ROW,COL);
		displayboard(board, ROW, COL);
		ret = IsWin(board,ROW,COL);
		if (ret != 'c')
		{
			break;
		}
	}
	if (ret == '+')
	{
		printf("玩家赢\n");
		
	}
	else if (ret == '#')
	{
		printf("电脑赢\n");
	}
	else
	{
		printf("平局\n");
	}
}
void test()//页面操作
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择：>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("输入错误，请重新选择\n");
			break;
		}

	} while (input);
}
int main()
{
	test();
	return 0;
}
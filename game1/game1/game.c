#define _CRT_SECURE_NO_WARNINGS
#include"game.h"

void initalboard(char board[ROW][COL], int row, int col)//棋盘初始化
{
	int i, j;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col;j++)
		{
			board[i][j] = ' ';
		}
	}
}
void displayboard(char board[ROW][COL], int row, int col)//打印棋盘
{
	int i, j;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)//打印一行的数据
		{
		    printf(" %c ", board[i][j]);
			if (j<col-1)//最后一列不打印竖线
			printf("|");
		}
		printf("\n");
		if (i<row-1)//最后一行不打印分割行
		for (j = 0; j < col; j++)//打印分割行
		{
		    printf("---");
			if (j<col-1)//最后一列不打印竖线
			printf("|");
		}
		printf("\n");
	}
}
void playermove(char board[ROW][COL], int row, int col)//玩家下棋
{
	int x, y;
	printf("玩家操作：>\n");
	while (1)
	{
		printf("请输入坐标:>");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= row && y>= 1 && y<=col)
		{
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = '+';
				break;
			}
			else
			{
				printf("坐标被占用请重新输入\n");
			}
		}
		else
		{
			printf("输入错误请重新输入\n");
		}
	}
}
void computermove(char board[ROW][COL], int row, int col)//电脑下棋
{
	int x, y;
	while (1)
	{
		x = rand() % ROW;
		y = rand() % COL;
		if (board[x][y] == ' ')
		{
			board[x][y] = '#';
			break;
		}
	}
}
char IsWin(char board[ROW][COL], int row, int col)//算法判断是否会赢
{
	int i;
	for (i = 0; i < row; i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ')
		{
			return board[i][0];
		}
	
	}
	for (i = 0; i < col; i++)
	{
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] != ' ')
		{
			return board[0][i];
		}
	}
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != ' ')
		return board[0][0];
    if(board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[0][2] != ' ')
		return board[0][2];
	if (1 == isfull(board, row, col))
	{
		return 'k';
	}
		return 'c';
}
int isfull(char board[ROW][COL], int row, int col)//1棋盘下满；0棋盘未下满
{
	int i, j;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
				return 0;
		}
		
	}
	return 1;
}
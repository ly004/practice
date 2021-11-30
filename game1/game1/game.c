#define _CRT_SECURE_NO_WARNINGS
#include"game.h"

void initalboard(char board[ROW][COL], int row, int col)//���̳�ʼ��
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
void displayboard(char board[ROW][COL], int row, int col)//��ӡ����
{
	int i, j;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)//��ӡһ�е�����
		{
		    printf(" %c ", board[i][j]);
			if (j<col-1)//���һ�в���ӡ����
			printf("|");
		}
		printf("\n");
		if (i<row-1)//���һ�в���ӡ�ָ���
		for (j = 0; j < col; j++)//��ӡ�ָ���
		{
		    printf("---");
			if (j<col-1)//���һ�в���ӡ����
			printf("|");
		}
		printf("\n");
	}
}
void playermove(char board[ROW][COL], int row, int col)//�������
{
	int x, y;
	printf("��Ҳ�����>\n");
	while (1)
	{
		printf("����������:>");
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
				printf("���걻ռ������������\n");
			}
		}
		else
		{
			printf("�����������������\n");
		}
	}
}
void computermove(char board[ROW][COL], int row, int col)//��������
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
char IsWin(char board[ROW][COL], int row, int col)//�㷨�ж��Ƿ��Ӯ
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
int isfull(char board[ROW][COL], int row, int col)//1����������0����δ����
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
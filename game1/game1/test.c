#define _CRT_SECURE_NO_WARNINGS
#include"game.h"
void menu()//�˵�ҳ��
{
	printf("**************************************************\n");
	printf("*****  1.paly  *******************  0.exit  ******\n");
	printf("**************************************************\n");

}
void game()//��Ϸ�㷨
{
	char ret;
	char board[ROW][COL] = { 0 };
	initalboard(board,ROW,COL);
	displayboard(board, ROW, COL);
	while (1)//��ҵ�����������
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
		printf("���Ӯ\n");
		
	}
	else if (ret == '#')
	{
		printf("����Ӯ\n");
	}
	else
	{
		printf("ƽ��\n");
	}
}
void test()//ҳ�����
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("��ѡ��>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("�������������ѡ��\n");
			break;
		}

	} while (input);
}
int main()
{
	test();
	return 0;
}
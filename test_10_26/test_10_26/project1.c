#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int mul = 0;
//	for (i = 1; i <= 9; i++)
//	{
//
//		for (j = 1; j <= i; j++)
//		{
//			mul = i*j;
//			printf(" %d*%d=%-2d", i, j, mul);
//		}
//		printf("\n");
//	}
//
//
//
//
//
//	return 0;
//}
void menu()
{
	printf("################################\n");
	printf("####   1.play    0.exit     ####\n");
	printf("################################\n");
}
void game()
{
   	int ret = 0;
	int guess = 0;
	ret = rand() % 100 + 1;
	//printf("%d\n", ret);
	while (1)
	{
		printf("������:>");
		scanf("%d", &guess);
		if (guess > ret)
		{
			printf("�´���\n");
		}
		else if (guess < ret)
		{
			printf("��С��\n");
		}
		else
		{
			printf("�¶���\n");
			break;
		}
	}

}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("��ѡ�񡷣�");
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
			printf("ѡ�����\n");
			break;

		}
	}
		while (input);

	return 0;
    }
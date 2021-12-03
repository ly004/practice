#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int add(int x, int y)
{
	return x + y;
}
int sub(int x, int y)
{
	return x - y;
}
int mul(int x, int y)
{
	return x * y;
}
int div(int x, int y)
{
	return x / y;
}
void menu()
{
	printf("*******  1.add  *********  2.sub  ****************\n");
	printf("*******  3.mul  *********  4.div  ****************\n");
	printf("****************  0.exit  ************************\n");
	printf("**************************************************\n");

}
void calc(int(*pf)(int, int))
{
	int x, y;
	printf("请输入两个操作数:>");
	scanf("%d%d", &x, &y);
	printf("%d\n", (*pf)(x, y));
}
//int main()
//{
//	int input, x, y;
//	do
//	{
//		menu();
//		printf("请选择:>");
//		scanf("%d", &input);
//		if (input >= 1 && input <= 4)
//		{
//			printf("输入两个操作数:>");
//			scanf("%d%d", &x, &y);
//			switch (input)
//			{
//			case 1:
//				printf("%d\n", add(x, y));
//				break;
//			case 2:
//				printf("%d\n", sub(x, y));
//				break;
//			case 3:
//				printf("%d\n", mul(x, y));
//				break;
//			case 4:
//				printf("%d\n", div(x, y));
//				break;
//			}
//		}
//		else if(input == 0)
//		{
//			printf("退出\n");
//			break;
//		}
//		else
//		{
//			printf("输入错误\n");
//		}
//	
//	} while (input); 
//	return 0;
//}
int main()
{
	int input;
	int(*pfarr[5])(int, int) = { 0, add, sub, mul, div };
	do
	{
		menu();
		printf("请选择:>");
		scanf("%d", &input);
			switch (input)
			{
			case 1:
				calc(add);
				break;
			case 2:
				calc(sub);
				break;
			case 3:
				calc(mul);
				break;
			case 4:
				calc(div);
				break;
			case 0:
				printf("退出\n");
				break;
			default:
				printf("输入错误\n");
				break;
		}
	} while (input);
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <Windows.h>
#include<stdint.h>

////int main()
////{
//	//int a = 10;
//	//printf("%d\n",a);
//	//return 0;
////}
////int main()
////{
////	int input = 0;
////	printf("�������\n");
////	printf("��Ҫ�ú�ѧϰ��?(1/0)>: ");
////	scanf_s("%d", &input);
////	if (input == 1)
////		printf("��offer\n");
////	else
////		printf("�����\n");
////	return 0;
////}
////int main()
////{
////	int line = 0;
////	while (line++ < 20000)
////	{
////		printf("�������\n");
////		printf("��һ�д���\n");
////		line++;
////	}
////	printf("��offer\n");
////	return 0;
////}
////int Add(int x, int y)
////{
////	int z = x + y;
////	return z;
////}
//
//
//
////int main()
////{
////	int sum = 0;
////	int a = 2;
////	int b = 3;
////	sum = Add(a, b);
////	printf("sum = %d\n", sum);
////	return 0;
////}
////int main()
////{
////	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
////	printf("%d\n", arr[9]);
////	return 0;
////
////
////}
////int main()
////{
////	int a = 3;
////	int b = 5;
////	int c = a^b;
////	printf("%d\n", c);
////	return 0;
////}
////int main()
////{
////	
////	printf("%d\n", sizeof(int*));
////	return 0;
////}
////struct Book
////{
////	char name[20];
////	short price;
////};
////int main()
////{
////	struct Book b1 = { "c���Գ������",55 };
////	printf("������%s\n", b1.name);
////	printf("price:%d\n", b1.price);
////	b1.price = 15;
////	return 0;
////}
////int main()
////{
////	int age = 10;
////	if (age < 18)
////	{
////		printf("δ����\n");
////		printf("ggg\n");
////	}
////	else{
////		if (age >= 18 && age < 28)
////			printf("����\n");
////		else if (age >= 28 && age < 50)
////			printf("����\n");
////		else
////			printf("������\n");
////
////	}
////	return 0;
////}
////int main()
////{
////	int a = 1;
////	while (a <= 100)
////	{
////		if (a%2 != 0)
////			printf(" %d ",a);
////		a++;
////	}
////
////
////	return 0;
////}
////int main()
////{
////	int day = 0;
////	scanf("%d", &day);
////	switch (day)
////	{
////	default:
////		printf("�������\n");
////		break;
////	case 1:
////	case 2:
////	case 3:
////	case 4:
////	case 5:
////		printf("������\n");
////		break;
////	case 6:
////	case 7:
////		printf("��Ϣ��\n");
////		break;
////	
////	}
////
////	return 0;
////}
////int main()
////{
////	//while (1)
////	//	printf("sb\n");
////	int i = 1;
////	while (i < 10)
////	{
////		if (i == 5)
////			printf("%d\n", i);		
////		i++;
////	}
////	return 0;
////}
////int main()
////{
////	int ch = 0;
////	/*putc;
////	printf("%c\n", ch);*/
////	while ((ch = getchar()) != EOF)
////	{
////		putchar(ch);
////	}
////	return 0;
////}
////int main()
////{
////	/*int ch = 0;
////	while ((ch=getchar()) != EOF)
////	{
////	putchar(ch);
////	}
////	return 0;*/
////	int ret = 0;
////	char password[20] = { 0 };
////	int ch = 0;
////	printf("�������룺>");
////	scanf("%s",password,20);
////	while ((ch = getchar()) != '\n');
////	{
////		getchar;
////	}
////	printf("��ȷ�ϣ�Y/N)��>");
////	ret = getchar();
////	if (ret == 'Y')
////		printf("���\n");
////	else
////		printf("����\n");
////	return 0;
////}
////int main()
////{
////	int i = 0;
////	for (i = 0; i < 10; i++)
////	{
////		if (i == 5)
////			printf("haha\n");
////		printf("%d\n",i);
////
////	}
////
////	return 0;
////}
////int main()
////{/*
////	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
////	int i = 0;
////	for (i = 0; i < 10; i++)
////	{
////		printf("%d\n", arr[i]);
////	}
////	return 0;*/
////}int m
////int main()
////
////{
////	int i = 0;
////	int n = 0;
////	int sum = 0;
////	int ret = 1;
////	printf("n�Ľ׳˼��㣺\n");
////	for (n = 1; n <= 3; n++)
////	{
////		ret = 1;
////		for (i = 1; i <= n; i++)
////		{
////			ret = ret * i;
////		}
////		sum = sum + ret;
////	}
////	printf("%d\n", sum);
////
////	return 0;
////}
//int main()
//
//{
//	int i = 0;
//	int n = 0;
//	int sum = 0;
//	int ret = 1;
//	for (n = 1; n <= 10; n++)
//	{
//		ret = ret * n;
//		sum = sum + ret;
//	}
//	printf("%d\n", sum);
//
//	return 0;
//}
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int k = 11;
//	int left = 0;
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	int right = sz - 1;
//	int mid = 0;
//	while(left <= right)
// {
//
//		mid = (left + right) / 2;
//		if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			printf("�ҵ��� �±�%d\n", mid);
//			break;
//		}
//	 }
//	if (right < left)
//		printf("�Ҳ���\n");
//	return 0;
//}
//int main()
//{
//	char arr1[] = "welcome to 510!!!!!!";
//	char arr2[] = "####################";
//	
//	
//	int left = 0;
//	//int right = sizeof(arr1) / sizeof(arr1[0]) - 2;
//
//	int right = strlen(arr1) - 1;
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);
//		system("cls");
//		left++;
//		right--;
//	}
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	char password[20] = {0};
//	char arr[] = "a123456789";
//
//	for (i = 1; i <= 3; i++)
//	{
//
//		scanf("%s", &password);
//		if (strcmp(password, "a123456789") == 0)
//		{
//			printf("��¼�ɹ�\n");
//			break;
//		}
//		else
//			printf("�������\n");
//	}
//	if (i == 4)
//		printf("�����������������\n");
//
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0; 
//	scanf("%d%d%d", &a, &b, &c);
//	if (a<b)
//	{
//		int tmp = a;
//		a = b;
//		b = tmp;
//	}
//	if (a<c)
//	{
//		int tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if (b<c)
//	{
//		int tmp = b;
//		b = c;
//		c = tmp;
//	}
//		printf("%d %d %d\n", a, b, c);
//	return 0;
//}
//int main()
//{
//	int a = 3;
//	for (a = 1; a < 100; a++)
//	{
//		if (a % 3 == 0)
//			printf("%d ", a);
//		else
//			;
//	}
//
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 100; i <= 200; i++)
//	{
//
//		for (j = 2; j <= i - 1; j++)
//		{
//			if (i%j == 0)
//			{
//				break;
//			}
//
//		}
//		if (i == j)
//			printf("%d\n", i);
//	}
//
//	return 0;
//}
#include<stdio.h>
int main()
{
	int n = 5;
	int i = 0;
	int k = 1;
	scanf("%d\n", &n);
	for (i = 1; i <= n; i++)
	{
		k = k * i;
	}
	printf("%d\n", k);
	return 0;
}













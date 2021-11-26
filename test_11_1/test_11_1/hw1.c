#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
//int main()
//{
//	int a = 1;
//	int b = 2;
//	printf("%d %d\n", a, b);
//	int tmp = 0;
//	tmp = a;
//	a = b;
//	b = tmp;
//	printf("%d %d\n", a,b);
//	return 0;
//}
//int main()
//{
//	int a = 1;
//	int b = 2;
//	a = a^b;
//	b = a^b;
//	a = a^b;
//	printf("%d %d\n", a, b);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 11, 9 };
//	int k = arr[0];
//	for (i = 0; i <= 9; i++)
//	{
//		if (arr[i] > k)
//			k = arr[i];
//	}
//	printf("%d\n", k);
//	return 0;
//}
//int main()
//{
//	int a, b, c, tmp;
//	scanf("%d %d %d", &a, &b, &c);
//	if (a < b)
//	{
//		tmp = a;
//		a = b;
//		b = tmp;
//	}
//	if (a < c)
//	{
//		tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if (b < c)
//	{
//		tmp = b;
//		b = c;
//		c = tmp;
//	}
//	printf("%d %d %d\n", a, b, c);
//	return 0;
//}
//int main()
//{
//	int a, b,tmp;
//	scanf("%d %d", &a, &b);
//	while (a%b)
//	{
//		tmp = a;
//		a = b;
//		b = tmp%b;
//	}
//	printf("%d\n", b);
//	return 0;
//}
int main()
{
	int i;

	char arr1[] = { 1, 2, 3, 4, 5 };
	char arr2[] = { 6, 7, 8, 9, 10 };
	int sz = sizeof(arr1) / sizeof(arr1[0]);
	for (i = 0; i < sz; i++)
	{
		int tmp;
		tmp = arr1[i];
		arr1[i] = arr2[i];
		arr2[i] = tmp;
	}
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr1[i]);
	}
	printf("\n");
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr2[i]);
	}
	
	return 0;
}
//int main()
//{
//    double i = 1;
//	int a = 1;
//	double ret = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		ret += a*1 / i;
//		a = -a;
//	}
//	printf("%lf\n", ret);
//	return 0;
////}
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if ((i % 10) == 9)
//		{
//			count++;
//		}
//		if ((i / 10) == 9)
//		{
//			count++;
//		}
//	}
//	printf("%d\n", count);
//	return 0;
//}
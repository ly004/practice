#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int Fac1(int n)
//
//{
//	int i = 0;
//	int ret = 1;
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;
//	}
//	return ret;
//
//}
//int Fac2(int n)
//{
//	if (n == 1)
//		return 1;
//	else
//		return n * Fac2(n - 1);
//
//}
//int main()
//{
//	int k = 5;
//	int ret = 0;
//	scanf("%d", &k);
//	ret = Fac2(k);
//	printf("%d\n", ret);
//	return 0;
//}
int count = 0;
int Fib1(int n)
{
	if (n == 3)
		count++;
	else if (n <= 2)
		return 1;
	else
		return Fib(n - 1) + Fib(n - 2);
}

int Fib(int n)
{
	int a = 1;
	int b = 1;
	int c = 1;
	while (n>2)
	{
		c = a + b;
		a = b;
		b = c;
		n--;
	}
	return c;
}
int main()
{
	int a = 0;
	int ret = 0;
	int n = 0;
	scanf("%d", &n);
    ret = Fib(n);
	printf("%d\n", ret);
	printf("%d\n", count);
	return 0;
}
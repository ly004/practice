#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void print(int k)
{
	int i;
	for (i = 0; i < k; i++)
	{
		printf("%c", '*');
	}
}
int main() 
{
	int i;
	for (i = 1; i <= 13; i += 2)
	{
		print(i);
		printf("\n");
	}
	for (i = 11; i >= 1; i -= 2)
	{
		print(i);
		printf("\n");
	}
	return 0;
}
//int main()
//{
//	int a, b, c, cha, i;
//	for (i = 0; i < 1000; i++)
//	{
//		a = i % 10;
//		b = (i / 10) % 10;
//		c = i / 100;
//		cha = a*a*a + b*b*b + c*c*c;
//		if (cha == i)
//		{
//			printf("%d ", i);
//
//		}
//	}
//	return 0;
//}
//int Sn(int a)
//{
//	int b, c, d, e;
//	b= a * 10 + a;
//	c = b * 10 + a;
//	d = c * 10 + a;
//	e = d * 10 + a;
//	return a + b + c + d + e;
//}
//int main()
//{
//	int a,k;
//	scanf("%d", &a);
//	k=Sn(a);
//	printf("%d\n", k);
//	return 0;
//}
//void mul(int a)
//{
//	int i,j,mul;
//	for (i = 1; i <= a; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			mul = i*j;
//			printf(" %d * %d = %-2d ",i,j, mul);
//		}
//		printf("\n");
//	}
//
//}
//int main()
//{
//	int a;
//	scanf("%d", &a);
//	mul(a);
//	return 0;
//}
//void swap(int* pa,int* pb)
//{
//	int tmp;
//	tmp = *pa;
//	*pa = *pb;
//	*pb = tmp;
//}
//int main()
//{
//	int a = 1;
//	int b = 2;
//	swap(&a,&b);
//	printf("%d ", a);
//	printf("%d", b);
//
//	return 0;
//}
//void init(int arr[], int sz)
//{
//	int i;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = i;
//	}
//}
//void reverse(int arr[],int sz)
//{
//	int start = 0;
//	int end = sz - 1;
//	while (end>=start)
//	{
//		arr[start] = arr[end];
//		start += 1;
//		end -= 1;
//	}
//}
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	init(arr,sz);
//	reverse(arr,sz);
//	return 0;
//}
 
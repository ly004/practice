#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<math.h>

//int main()
//{
//
//	char arr1[] = "hello";
//	char arr2[20] = "";
//
//	memset(arr1, '*', 5);
//	printf("%s\n", arr1);
//
//	return 0;
//// }
void swap2(int* pa, int* pb)
{
	int tmp = 0;
	tmp = *pa;
	*pa = *pb;
	*pb = tmp;
}

int main()
{
	int a = 1;
	int b = 2;
	&a;
	&b;
	swap2(&a,&b);
	printf("%d\n", a);
	printf("%d\n", b);
	return 0;
}
//int is_prime(int x)
//{
//	int z = 0;
//	int n = 0;
//	for (n = 2; n <sqrt(x); n++)
//	{
//		if ((x%n) == 0)      
//			return 0;
//	}
//	return 1;
//
//}
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		if (is_prime(i) == 1)
//			printf("%d ", i);
//
//	}
//
//	return 0;
//}
//int binary_search(int arr[], int k,int sz)
//{
//	int left = 0;
//	int right =sz - 1;
//	int mid = 0;
//	while (left <= right)
//	{
//		mid = (left + right) / 2;
//		if (arr[mid] < k)
//			left = mid + 1;
//		else if (arr[mid] > k)
//			right = mid - 1;
//		else
//			return mid;
//	}
//	return -1;
//}
//int main() 
//{
//	int ret = 0;
//	int sz = 0;
//	int k = 6;
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	sz = sizeof(arr) / sizeof(arr[0]);
//	ret = binary_search(arr, k,sz);
//	printf("%d\n", ret);
//
//	return 0;
//}
//int add(int* pnum)
//{
//	(*pnum)++;
//	return 1;
//
//}
//int main()
//{
//	int num = 2;
//	add(&num);
//	printf("%d\n", num);
//
//	return 0;
//}
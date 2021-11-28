#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>



void bubble_sort(int arr[], int sz)
{
	int i;
	int flag = 1;//1表示真，循环完成；
	for (i = 0; i < sz - 1; i++)
	{
		int k;
		for (k = 0; k <sz-1-i ; k++)
		{
			if (arr[k] > arr[k + 1])
			{
				int tmp =arr[k];
				arr[k] = arr[k + 1];
				arr[k + 1] = tmp;
				flag = 0;
			}
		}
		if (flag == 1)
			break;
	}
}
int main()
{
	int i = 0;
	int arr[] = { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr, sz);
	for (i = 0; i <= 9; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
} 
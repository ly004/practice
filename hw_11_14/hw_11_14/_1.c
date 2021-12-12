#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include"_.h"
int main()
{
	int a;
	char string[] = "abcd";
	scanf("%d", &a);
	int k = factorial2(a);
	printf("%d\n",k);
	return 0;
}

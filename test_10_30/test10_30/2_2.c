#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void print(int x)
{
	printf("%d ", x % 10);
	if (x > 9)
	{
		print(x / 10);
	}

	
}


int main()
{
	int k = 0;
	scanf("%d", &k);
	print(k);
	return 0;
}
//int my_strlen(char* strp)
//{
//	int count = 0;
//	while(*strp != '\0')
//	{
//		count++;
//		strp++;
//	}
//	return count;
//}
//
//
//int main()
//{
//	char arr[] = "asdfgh";
//	int k = my_strlen(arr);
//	printf("%d\n", k);
//
//	return 0;
//}
//int my_strlen(char* strp)
//{
//	if (*strp != '\0')
//		return (my_strlen(strp + 1) + 1);
//	else
//		return 0;
//
//}
//int main()
//{
//	char arr[] = "abcd";
//	int i = my_strlen(arr);
//	printf("%d\n", i);
//
//	return 0;
//}
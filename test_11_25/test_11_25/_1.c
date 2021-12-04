#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int count_one_bits1(int x)
{
	int i;
	int count = 0;
	for (i = 0; i < 32; i++)
	{
		;
		if ((x>>i) & 1)
		{
			count++;
		}
	}
	return count;
}
int count_one_bits2(int x)
{
	int count = 0;
	while (x = x &(x - 1))
	{
		count++;
	}
	return count + 1;
}
void odd_even_bits(int x)
{
	int i;
	for (i = 31; i>0; i -= 2)
	{
		if (((x>>i) & 1) == 1)
		{
			printf("%d", 1);
		}
		else
		{
			printf("%d", 0);
		}
	}
	printf("\n");
	for (i = 30; i>=0 ; i -= 2)
	{
		if (((x>>i) & 1) == 1)
		{
			printf("%d", 1);
		}
		else
		{
			printf("%d", 0);
		}
	}
}
int diff_bits(int x, int y)
{
	int count = 0;
	int z = x^y;
	while (z)
	{
		z = z&(z - 1);
		count++;
	}
	return count;
}
int main()
{
	int x = 1999;
	int y = 2299;
	int ret = diff_bits(x, y);
	printf("%d\n", ret);
	return 0;
}
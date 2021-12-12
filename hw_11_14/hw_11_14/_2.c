#define _CRT_SECURE_NO_WARNINGS
int fib1(int a)
{
	int i;
	if (a < 3)
		return 1;
	else
	{
		return fib1(a - 1) + fib1(a - 2);
	}
}
int fib2(int a)
{
	int i,c;
	int d = 1;
	int b = 1;
	if (a < 3)
		return 1;
	else
	{
		for (i = 3; i <= a;i++)
		{
			c = d + b;
			d = b;
			b = c;
		}
		return c;
	}
}
int fuc(int n,int k)
{
	if (k == 1)
		return n;
	else
		return n*fuc(n, k - 1);
}
int digitsum(int n)
{
	if (n > 9)
		return digitsum(n / 10) + n % 10;
	else
		return n;
}
void reverse_string(char string[], int sz)
{
	if (string[sz-1] != '\0')
		printf("%c", string[sz - 1]);
	reverse_string(string, sz - 1);

}
int strlen1(char* str)
{
	if (*str != '\0')
		return 1 + strlen1(str + 1);
	else
		return 0;
}
int strlen2(char* str)
{
	int count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return count;
}
void print(int a)
{
	if (a < 9)
		printf("%d ", a);
	else
	{
		print(a / 10);
		printf("%d ", a % 10);
	}
}
int factorial1(int n)
{
	int i;
	int mul = 1;
	for (i = 1; i <= n; i++)
	{
		mul *= i;
	}
	return mul;
}
int factorial2(int n)
{
	if (n == 1)
		return 1;
	else
		return n*factorial2(n - 1);
}
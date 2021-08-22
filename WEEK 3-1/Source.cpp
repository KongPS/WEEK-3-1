#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	int a, b, c, d;
	int sum = 0;
	scanf("%d%d%d%d", &a, &b, &c, &d);
	if (a % 2 == 0)
	{
		sum++;
	}
	if (b % 2 == 0)
	{
		sum++;
	}
	if (c % 2 == 0)
	{
		sum++;
	}
	if (d % 2 == 0)
	{
		sum++;
	}
	printf("%d", sum);
}
// BOJ_1193_fraction_2, 분수찾기
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a;
	int b = 1;
	int i;

	scanf("%d", &a);

	for (i = 1; a > b; )
	{
		b += ++i;
	}

	if (i % 2 == 0)
	{
		printf("%d/%d", i - (b - a), 1 + (b - a));
	}
	else
	{
		printf("%d/%d", 1 + (b - a), i - (b - a));
	}
	return 0;
}
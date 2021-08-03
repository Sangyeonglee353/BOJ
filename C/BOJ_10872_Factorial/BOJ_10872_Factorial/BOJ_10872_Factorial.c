// BOJ_10872_Factorial, ÆÑÅä¸®¾ó
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int Factorial(int n);

int main(void)
{
	int N;

	scanf("%d", &N);

	printf("%d", Factorial(N));
	
	return 0;
}

int Factorial(int n)
{
	if (n == 0)
	{
		return 1;
	}
	else
	{
		return Factorial(n - 1) * n;
	}
}
// BOJ_10870_Fibonacci_numbers, 피보나치 수
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int Fibonacci(int n);

int main(void)
{
	int N;

	scanf("%d", &N);

	printf("%d", Fibonacci(N));

	return 0;
}

int Fibonacci(int n)
{
	if (n == 0)
	{
		return 0;
	}
	else if (n == 1)
	{
		return 1;
	}
	else
	{
		return Fibonacci(n - 1) + Fibonacci(n-2);
	}
}
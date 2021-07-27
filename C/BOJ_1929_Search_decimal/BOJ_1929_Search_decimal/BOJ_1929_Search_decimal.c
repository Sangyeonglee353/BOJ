// BOJ_1929_Search_decimal, 소수 구하기, 0: 소수, 1: 소수가 아닌 수
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define size 1000001

int main(void)
{
	int M, N, i, j;
	int arr[size] = { 0, }; // 모두 소수로 지정

	scanf("%d %d", &M, &N);

	arr[0] = 1, arr[1] = 1;
	for (i = 2; i <= N; i++)
	{
		for (j = 2; i * j <= N; j++)
		{
			arr[i * j] = 1;
		}
	}

	for (i = M; i <= N; i++)
	{
		if (arr[i] == 0)
		{
			printf("%d\n", i);
		}
	}
	return 0;
}
// BOJ_1929_Search_decimal, 소수 찾기
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define size 1000001

int main(void)
{
	int M, N, i, j;
	int arr[size] = { 0, };

	arr[0] = 1, arr[1] = 1;
	for (j = 2; j < size / j; j++)
	{
		if (arr[j] == 1)
		{
			continue;
		}
		else
		{
			for (i = j * j; i < size; i += j)
			{
				if (i % j == 0)
				{
					arr[i] = 1;
				}
			}
		}
	}
	scanf("%d %d", &M, &N);

	for (i = M; i <= N; i++)
	{
		if (arr[i] == 0)
		{
			printf("%d\n", i);
		}
	}
	return 0;
}


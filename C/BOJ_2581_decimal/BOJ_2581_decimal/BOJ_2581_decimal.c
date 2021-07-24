// BOJ_2581_decimal, ¼Ò¼ö
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int M, N, i, j;
	int cnt = 0, result = 0, min = 10001;

	scanf("%d\n%d", &M, &N);

	for (i = M; i <= N; i++)
	{
		for (j = 2; j < i; j++)
		{
			if (i % j == 0)
			{
				cnt++;
			}
		}

		if (cnt == 0 && i != 1)
		{
			result += i;
			if (min > i)
			{
				min = i;
			}
		}
		cnt = 0;
	}
	if (min == 10001)
	{
		printf("-1\n");
	}
	else
	{
		printf("%d\n%d\n", result, min);
	}
	
	return 0;
}



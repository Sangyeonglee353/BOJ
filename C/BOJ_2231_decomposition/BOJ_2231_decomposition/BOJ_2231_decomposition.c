// BOJ_2231_decomposition, ºÐÇØÇÕ
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int share(int n, int sum);

int main(void)
{
	int N, M, SUM, check = 0;

	scanf("%d", &N);

	for (M = 10; 10 <= N; M++)
	{
		SUM = M;
		SUM = share(M, SUM);

		if (SUM == N)
		{
			printf("%d\n", M);
			check = 1;
			break;
		}
	}

	if (check == 0)
	{
		printf("%d\n", 0);
	}

	return 0;
}

int share(int n, int sum)
{
	sum += n % 10;
	n = n / 10;

	if (n > 0)
	{
		return share(n, sum);
	}
	else
	{
		return sum;
	}
}

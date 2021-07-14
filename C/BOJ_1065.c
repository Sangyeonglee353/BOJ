#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void han_soo(int N);

int main(void)
{
	int N;
	scanf("%d", &N);
	han_soo(N);
	
	return 0;
}

void han_soo(int N)
{
	if (N < 100)
	{
		printf("%d", N);
	}
	else
	{
		int i;
		int cnt;
		int A, B, C; // A�� 100�� �ڸ�, B�� 10�� �ڸ�, C�� 1�� �ڸ�
		cnt = 99;
		for (i = 100; i <= N; i++)
		{
			A = i / 100; // 765 / 100 = 7
			B = i / 10 % 10; // 765 / 10 = 76 % 10 = 6
			C = i % 10; // 765 % 10 = 5

			if ((C - B) == (B - A))
			{
				cnt++;
			}
		}
		printf("%d", cnt);
	}
}

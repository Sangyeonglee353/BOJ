// BOJ_1011_Fly me to the Alpha Centauri
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int i, N, X, Y;
	int distance;
	int count = 0;      // 이동 횟수
	int move = 1;       // count별 빈도수
	int Total_move = 0; // 이동 거리의 합

	scanf("%d", &N);

	for (i = 0; i < N; i++)
	{
		scanf("%d %d", &X, &Y);

		distance = Y - X;

		while (Total_move < distance)
		{
			count += 1;
			Total_move += move;
			if (count % 2 == 0)
			{
				move += 1;
			}
		}
		printf("%d\n", count);
	}
	
	return 0;
}
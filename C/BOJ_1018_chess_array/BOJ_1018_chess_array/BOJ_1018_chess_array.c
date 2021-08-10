// BOJ_1018_chess_array, 체스판 다시 칠하기
#define _CRT_SECURE_NO_WARNINGS
#define minFinder(a, b) a < b ? a :b
#include <stdio.h>
int main(void)
{
	char board[50][50];

	int N, M;
	int min = 80;
	int cntB = 0, cntW = 0;
	int i, j, a, b;

	scanf("%d %d", &N, &M);
	for (i = 0; i < N; i++)
	{
		scanf("%s", &board[i]);
	}

	for (i = 0; i < N - 7; i++)
	{
		for (j = 0; j < M - 7; j++)
		{
			cntB = 0;
			cntW = 0;
			for (a = i; a < i + 8; a++)
			{
				for (b = j; b < j + 8; b++)
				{
					if ((a + b) % 2 == 0)
					{
						if (board[a][b] == 'B')
						{
							cntW++;
						}
						else
						{
							cntB++;
						}
					}
					else
					{
						if (board[a][b] == 'B')
						{
							cntB++;
						}
						else
						{
							cntW++;
						}
					}
				}
			}
			min = minFinder(min, cntB);
			min = minFinder(min, cntW);
		}
		printf("%d\n", min);
	}
	return 0;
}
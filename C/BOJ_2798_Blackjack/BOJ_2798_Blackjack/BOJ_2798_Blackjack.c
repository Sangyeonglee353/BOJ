// BOJ_2798_Blackjack, 블랙잭 | 알고리즘 : brute force
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 100

int main(void)
{
	int N, M, SUM=0, MAX=0, i, j, k;
	int arr[SIZE];

	// 입력부
	scanf("%d %d\n", &N, &M);

	for (i = 0; i < N; i++)
	{
		scanf("%d", &arr[i]);
	}
	
	// 계산부
	for (i = 0; i < N; i++)
	{
		for (j = i + 1; j < N; j++)
		{
			for (k = j + 1; k < N; k++)
			{
				// 카드 3개의 합
				SUM = arr[i] + arr[j] + arr[k];
				
				// 근접한 값 저장
				if (MAX < SUM && SUM <= M)
				{
					MAX = SUM;
				}
			}
		}
	}

	printf("%d", MAX);
	return 0;
}
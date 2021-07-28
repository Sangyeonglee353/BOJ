// BOJ_9020_Goldbach's_conjecture, 골드바흐의 추측
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define size 10001

int main(void)
{
	int T, n, i, j;
	int arr[size] = { 0, };
	
	// 에라토스테네스의 체를 이용한 소수 배열 생성
	arr[0] = 1, arr[1] = 1;
	for (i = 2; i < size; i++)
	{
		if (arr[i] == 1)
		{
			continue;
		}
		else
		{
			for (j = 2; i * j <= size; j++)
			{
				arr[i * j] = 1;
			}
		}
	}
	// 테스트케이스 입력부
	scanf("%d", &T);

	for (i = 0; i < T; i++)
	{
		scanf("%d", &n);

		for (j = n / 2; j > 0; j--)
		{
			if (arr[j] != 1 && arr[n - j] != 1)
			{
				printf("%d %d\n", j, n - j);
				break;
			}
		}
	}
	return 0;
}
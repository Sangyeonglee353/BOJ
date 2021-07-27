// BOJ_4948_Betrand_Postulate, 베르트랑 공준
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define size 123456 * 2 + 1

int main(void)
{
	int n, i, j, k;
	int arr[size] = { 0, };
	int cnt = 0;

	while (1)
	{
		scanf("%d", &n);

		if (n == 0)
		{
			break;
		}

		k = 2 * n;
		arr[0] = 1, arr[1] = 1;
		for (i = 2; i <= k; i++) // 입력값만큼 소수 배열 생성
		{
			if (arr[i] == 1)
			{
				continue;
			}
			else
			{
				for (j = 2; i * j <= k; j++)
				{
					arr[i * j] = 1;
				}
			}
		}

		for (i = n+1; i <= k; i++) // 소수의 개수 계산
		{
			if (arr[i] == 0)
			{
				cnt++;
			}
		}
		printf("%d\n", cnt);
		cnt = 0;
	}
	
	return 0;
}
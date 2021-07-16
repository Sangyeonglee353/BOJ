// BOJ_1193_fraction_분수찾기
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int x, key = 0, i = 2, j = 1, k = 2, cnt = 2;
	
	// 순번 입력부
	scanf("%d", &x);

	// 1/1인 경우
	if (x == 1)
	{
		printf("1/1");
		return 0;
	}

	// 짝수, 홀수 대각선 판별
	while (1)
	{
		if (i <= x && i + j >= x)
		{
			if (j % 2 == 1)
			{
				key = 0; // 짝수 대각선
			}
			else
			{
				key = 1; // 홀수 대각선
			}
			break;
		}
		i = i + j + 1;
		j++;
	}

	i = 2, j = 0, k = 0;

	// 위 판별에 따른 값 출력
	while (1)
	{
		j = 1;
		for (k = i; k > 0; k--)
		{
			if (x == cnt)
			{
				printf("%d/%d", (key == 1) ? k : j, (key == 1) ? j : k);
				return 0;
			}
			j++;
			cnt++;
		}
		i++;
	}
	return 0;
}
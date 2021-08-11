// BOJ_2750_number_arrange, 수 정렬하기
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int N, i;
	int arr[1000];
	int temp;

	scanf("%d", &N);

	for (i = 0; i < N; i++)
	{
		scanf("%d", &arr[i]);
	}

	for (i = 0; i < N; i++)
	{
		if (arr[i] < arr[i + 1])
		{
			temp = arr[i];
			arr[i] = arr[i + 1];
			arr[i + 1] = temp;
		}
	}

	for (i = 0; i < N; i++)
	{
		printf("%d\n", arr[i]);
	}

	return 0;
}
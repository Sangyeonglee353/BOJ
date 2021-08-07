// BOJ_2798_Blackjack, ���� | �˰��� : brute force
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 100

int main(void)
{
	int N, M, SUM=0, MAX=0, i, j, k;
	int arr[SIZE];

	// �Էº�
	scanf("%d %d\n", &N, &M);

	for (i = 0; i < N; i++)
	{
		scanf("%d", &arr[i]);
	}
	
	// ����
	for (i = 0; i < N; i++)
	{
		for (j = i + 1; j < N; j++)
		{
			for (k = j + 1; k < N; k++)
			{
				// ī�� 3���� ��
				SUM = arr[i] + arr[j] + arr[k];
				
				// ������ �� ����
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
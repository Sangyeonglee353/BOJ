#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int check(char a[], int len); // �׷� �ܾ� �˻� �Լ�

int main(void)
{
	int i, N;
	char arr[100]; // ���ڿ�
	int cnt = 0; // �׷� �ܾ� ����

	// �ܾ��� ���� �Էº�
	scanf("%d", &N);

	for (i = 0; i < N; i++)
	{
		// �ܾ� �Էº�
		scanf("%s", arr);
		cnt += check(arr, strlen(arr));
	}

	printf("%d", cnt);
	return 0;
}

int check(char a[], int len)
{
	int i, j;
	int key = 0;

	for (i = 0; i < len; i++)
	{
		for (j = 0; j < len; j++)
		{
			if (a[i] == a[j])
			{
				key = j - i;

				if (key > 1)
				{
					// �׷� �ܾ����� �˻�
					if (a[j - 1] != a[j])
					{
						return 0;
					}
				}
			}
		}
	}
	return 1;
}

// BOJ_1193_fraction_�м�ã��
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int x, key = 0, i = 2, j = 1, k = 2, cnt = 2;
	
	// ���� �Էº�
	scanf("%d", &x);

	// 1/1�� ���
	if (x == 1)
	{
		printf("1/1");
		return 0;
	}

	// ¦��, Ȧ�� �밢�� �Ǻ�
	while (1)
	{
		if (i <= x && i + j >= x)
		{
			if (j % 2 == 1)
			{
				key = 0; // ¦�� �밢��
			}
			else
			{
				key = 1; // Ȧ�� �밢��
			}
			break;
		}
		i = i + j + 1;
		j++;
	}

	i = 2, j = 0, k = 0;

	// �� �Ǻ��� ���� �� ���
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
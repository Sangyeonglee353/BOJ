#include<stdio.h>
#include<stdbool.h>
#define N 10001 // 10000���� ���� �� �̹Ƿ�

int self_number(int n);
bool arr[N];

int main(void)
{
	int i, num;

	for (i = 1; i < N; i++)
	{
		num = self_number(i);

		if (num <= N)
		{
			arr[num] = true;
		}
	}

	// ��º�
	for (i = 1; i < N; i++)
	{
		if (!arr[i]) // false ��� �� ���
		{
			printf("%d\n", i);
		}
	}
	return 0;
}

int self_number(int n)
{
	int sum = n;
	
	while (1)
	{
		if (n == 0)
		{
			break; // 0�� �Ǹ� ����
		}
		else
		{
			sum += n % 10; // 1�� �ڸ� �����ֱ�
			n = n / 10; // ���ڸ��� ���ֱ�
		}
	}

	return sum;
}
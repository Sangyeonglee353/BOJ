#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int N, i; // ������ ����, �ݺ� ����
	char arr[100]; // ���� �迭
	int sum = 0;

	scanf("%d", &N);
	scanf("%s", &arr);
	for (i = 0; i < N; i++)
	{
		sum += arr[i] - '0';
	}
	printf("%d", sum);
}
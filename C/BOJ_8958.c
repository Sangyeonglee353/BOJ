#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int main(void)
{
	int input; // �Է� ��
	int i, j; // �ݺ� ����
	int count; // ī��Ʈ
	int sum[100] = { 0, }; // �հ�
	char arr[80]; // �׽�Ʈ ���̽� ���ڿ� ���庯��
	
	scanf("%d", &input);

	for (i = 0; i < input; i++)
	{
		// �Էº�
		scanf("%s", &arr);
		count = 1;

		// �հ� ����
		for (j = 0; j < strlen(arr); j++)
		{
			if (arr[j] == 'O')
			{
				sum[i] += count;
				count++;
			}
			else
			{
				count = 1;
			}
		}
	}

	// ��º�
	for (i = 0; i < input; i++)
	{
		printf("%d\n", sum[i]);
	}
	return 0;
}
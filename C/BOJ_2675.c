#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
	int T, R, i, j, k; // T: �׽�Ʈ ���̽��� ����, R: �ݺ� Ƚ��, i, j, k: �ݺ� ����
	char S[20]; // S: �Է¹��� ���ڿ� ����, ũ��� 20

	scanf("%d", &T); // �׽�Ʈ ���̽� �Է�

	for (i = 0; i < T; i++)
	{
		scanf("%d %s", &R, S);          // �ݺ� Ƚ���� ���ڿ� �Է�

		for (j = 0; j < strlen(S); j++) // ���ڿ��� ���� ��ŭ
		{
			for (k = 0; k < R; k++)     // �ݺ� Ƚ����ŭ �� ���� �ݺ�
			{
				printf("%c", S[j]);
			}
		}
		printf("\n");
	}
	
	return 0;
}
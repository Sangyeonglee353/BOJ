// BOJ_10757_A_PLUS_B, ū �� A + B
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void reverse(char arr[]); // �迭 ��������

int main(void)
{
	char A[10002] = { 0, };
	char B[10002] = { 0, };
	char res[10003] = { 0, };
	int carry = 0, i; // carry �ø�

	scanf("%s %s", A, B);
	reverse(A);
	reverse(B);
	// �� �� ������ ���� ����
	int len = strlen(A) > strlen(B) ? strlen(A) : strlen(B);

	for (i = 0; i < len; i++)
	{
		//���ڷ� ��ȯ�� �ø��� �Բ� ����
		int sum = A[i] - '0' + B[i] - '0' + carry;
		//A[i] �Ǵ� B[i]�� null�� ��� ���ʿ��� ������ �߻��ϹǷ�
		//0 �̻��� �� ������ ���� 0�� �ƽ�Ű �ڵ� ���� ���Ѵ�
		while (sum < 0)
		{
			sum += '0';
		}
		if (sum > 9)
		{
			carry = 1; // �ø�
		}
		else
		{
			carry = 0;
		}
		res[i] = sum % 10 + '0'; // �ø��ϰ� ���� ���� �ڸ� ���� �ƽ�Ű�ڵ带 ����
	}
	if (carry == 1)
	{
		res[len] = '1'; // ���� ū �ڸ������� �ø��� �߻��ϸ� �迭�� �������� 1�� �߰�
	}
	reverse(res); // ������ ������Ǿ����� �������� ������ �� ����
	printf("%s", res);

	return 0;
}

void reverse(char arr[])
{
	int len = strlen(arr);
	for (int i = 0; i < len / 2; i++)
	{
		char temp = arr[i];
		arr[i] = arr[len - i - 1];
		arr[len - i - 1] = temp;
	}
}

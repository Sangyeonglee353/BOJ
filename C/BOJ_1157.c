#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main(void)
{
	char input[1000000];
	int count[26] = { 0, };
	int i,j, max; // i,j: �ݺ� ����, max: �ִ밪
	int select = 0;
	int result = 0;

	// ���� �Էº�
	scanf("%s", input);

	// �� ���� �� ����_�ҹ���
	for (i = 'a'; i <= 'z'; i++)
	{
		for (j = 0; j < strlen(input); j++)
		{
			if (i == input[j])
			{
				count[i - 'a']++;
			}
		}
	}

	// �� ���� �� ����_�빮��
	for (i = 'A'; i <= 'Z'; i++)
	{
		for(j = 0; j < strlen(input); j++)
		{ 
			if (i == input[j])
			{
				count[i - 'A']++;
			}
		}
	}

	// �ִ� ���� �� ����
	max = count[0];
	for (i = 0; i < 26; i++)
	{
		if (max < count[i])
		{
			max = count[i];
			select = i;
		}
	}

	// ���� ���� ���� ���ĺ��� ���� �� �����ϴ��� �˻�
	for (i = 0; i < 26; i++)
	{
		if (max == count[i])
		{
			result++;
		}
	}

	// ��� ��º�
	if (result > 1)
	{
		printf("?\n");
	}
	else
	{
		printf("%c", select + 'A');
	}

	return 0;
}
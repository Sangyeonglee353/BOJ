#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{
	int input; // �׽�Ʈ ���̽��� ����
	int student; // �л��� ��
	int grade[1000];  // �л��� ����
	int i, j, k; // �ݺ� ����
	int sum; // �л����� ���� �հ�
	double avg;
	int count; // ����� ���� �л� ��

	scanf("%d", &input);
	
	for (i = 0; i < input; i++)
	{
		sum = 0;
		avg = 0;
		count = 0;
		scanf("%d", &student);

		for (j = 0; j < student; j++)
		{
			scanf("%d", &grade[j]);
			sum += grade[j];
		}
		avg = sum / student;
		for (k = 0; k < student; k++)
		{
			if (avg < grade[k])
			{
				count++;
			}
		}
		printf("%.3lf%%\n", (double)count/student*100);
	}
	
	return 0;
}
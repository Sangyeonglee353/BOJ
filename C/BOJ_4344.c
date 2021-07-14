#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{
	int input; // 테스트 케이스의 개수
	int student; // 학생의 수
	int grade[1000];  // 학생의 점수
	int i, j, k; // 반복 변수
	int sum; // 학생들의 점수 합계
	double avg;
	int count; // 평균을 넘은 학생 수

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
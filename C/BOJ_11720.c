#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int N, i; // 숫자의 개수, 반복 변수
	char arr[100]; // 숫자 배열
	int sum = 0;

	scanf("%d", &N);
	scanf("%s", &arr);
	for (i = 0; i < N; i++)
	{
		sum += arr[i] - '0';
	}
	printf("%d", sum);
}
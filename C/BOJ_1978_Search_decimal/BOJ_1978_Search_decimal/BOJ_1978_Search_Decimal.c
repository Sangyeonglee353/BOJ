// BOJ_1978_Search_Deciaml, 소수 찾기
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int Isdecimal(int n);

int main(void)
{
	int N, i, num;
	int cnt = 0;

	scanf("%d", &N);

	for (i = 0; i < N; i++)
	{
		scanf("%d", &num);
		if(Isdecimal(num))
		{
			cnt++;
		}
	}
	printf("%d", cnt);

	return 0;
}

int Isdecimal(int n)
{
	int i = 0;
	int last = n / 2;
	if (n <= 1)
	{
		return 0;
	}

	for (i = 2; i <= last; i++)
	{
		if ((n % i) == 0)
		{
			return 0;
		}
	}
	return 1;
}

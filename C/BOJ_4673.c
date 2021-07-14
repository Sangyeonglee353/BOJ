#include<stdio.h>
#include<stdbool.h>
#define N 10001 // 10000보다 작은 수 이므로

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

	// 출력부
	for (i = 1; i < N; i++)
	{
		if (!arr[i]) // false 경우 값 출력
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
			break; // 0이 되면 종료
		}
		else
		{
			sum += n % 10; // 1의 자리 더해주기
			n = n / 10; // 한자리씩 없애기
		}
	}

	return sum;
}
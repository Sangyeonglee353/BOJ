// BOJ_11729_Tower_of_Hanoi, 하노이의 탑
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

void move(int from, int to);
void hanoi(int n, int from, int by, int to);

int main(void)
{
	int N, cnt;
	scanf("%d", &N);

	cnt = (int)pow(2, N) - 1; // 메르센의 수
	printf("%d\n", cnt);

	hanoi(N, 1, 2, 3);
}

void move(int from, int to)
{
	printf("%d %d\n", from, to);
}

void hanoi(int n, int from, int by, int to)
{
	if (n == 0)
	{
		return;
	}
	else
	{
		hanoi(n - 1, from, to, by);
		move(from, to);
		hanoi(n - 1, by, from, to);
	}
}
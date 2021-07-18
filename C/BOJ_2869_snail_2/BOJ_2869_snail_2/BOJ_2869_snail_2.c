// BOJ_2869_snail, 달팽이는 올라가고 싶다
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main(void)
{
	int A, B, V;
	int day;

	scanf("%d %d %d", &A, &B, &V);

	if ((V - A) % (A - B) == 0)
	{
		day = (V - A) / (A - B);
	}
	else
	{
		day = (V - A) / (A - B) + 1;
	}

	printf("%d", day+1);
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int A, B, C; // A: �������, B: �������, C: �Ǹź��
	
	scanf("%d %d %d", &A, &B, &C);

	if (B >= C)
	{
		printf("-1\n");
	}
	else
	{
		printf("%d\n", A / (C - B) + 1);
	}

	return 0;
}
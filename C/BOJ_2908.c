#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int a, b, ra, rb;
	scanf("%d %d", &a, &b);

	ra = a / 100 + (a / 10 % 10) * 10 + (a % 10) * 100;
	rb = b / 100 + (b / 10 % 10) * 10 + (b % 10) * 100;
	
	if (ra > rb)
	{
		printf("%d", ra);
	}
	else
	{
		printf("%d", rb);
	}
	
	return 0;
}
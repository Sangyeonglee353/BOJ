// BOJ_4153_Right_triangle, �����ﰢ��
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main(void)
{
	int a, b, c;
	
	while (1)
	{
		scanf("%d %d %d", &a, &b, &c);

		if (a == 0 && b == 0 && c == 0)
		{
			break;
		}

		if (c == sqrt(pow(a, 2) + pow(b, 2)))
		{
			printf("right\n");
		}
		else
		{
			printf("wrong\n");
		}
	}
	return 0;
}
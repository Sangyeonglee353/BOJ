// BOJ_4153_Right_triangle, Á÷°¢»ï°¢Çü
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main(void)
{
	int a, b, c;
	int max, num1, num2;

	while (1)
	{
		scanf("%d %d %d", &a, &b, &c);

		if (a == 0 && b == 0 && c == 0)
		{
			break;
		}
		
		if (a > b)
		{
			if (a > c)
			{
				max = a;
				num1 = b;
				num2 = c;
			}
			else
			{
				max = c;
				num1 = a;
				num2 = b;
			}
		}
		else
		{
			if (b > c)
			{
				max = b;
				num1 = a;
				num2 = c;
			}
			else
			{
				max = c;
				num1 = a;
				num2 = b;
			}
		}

		if (max == sqrt(pow(num1, 2) + pow(num2, 2)))
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
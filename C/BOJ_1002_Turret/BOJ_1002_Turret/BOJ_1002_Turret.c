// BOJ_1002_Turret, ≈Õ∑ø
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main(void)
{
	int d, dx, dy, x1, x2, y1, y2, r1, r2;
	int i, T, temp, add, sub;
	
	scanf("%d", &T);
	for (i = 0; i < T; i++)
	{
		scanf("%d %d %d %d %d %d", &x1, &y1, &r1, &x2, &y2, &r2);
		dx = x1 - x2;
		dy = y1 - y2;

		if (r1 > r2)
		{
			temp = r1;
			r1 = r2;
			r2 = temp;
		}
		
		add = r1 + r2;
		add = pow(add, 2);
		sub = r2 - r1;
		sub = pow(sub, 2);
		d = pow(dx, 2) + pow(dy, 2);

		if (d < add && d > sub)
		{
			printf("2");
		}
		else if (d == add || (d == sub && d != 0))
		{
			printf("1");
		}
		else if (d < sub || d > add)
		{
			printf("0");
		}
		else if (d == 0)
		{
			if (r1 == r2)
			{
				printf("-1");
			}
			else
			{
				printf("0");
			}
		}
		printf("\n");
	}
	return 0;
}
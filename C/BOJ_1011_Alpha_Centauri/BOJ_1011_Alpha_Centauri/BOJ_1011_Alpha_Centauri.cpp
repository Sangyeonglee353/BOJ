// BOJ_1011_Fly me the Alpha Centauri
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int T, i;
	unsigned int x, y, distance;
	int cnt, mv;
	

	scanf("%d", &T);
	
	for (i = 0; i < T; i++)
	{
		cnt = 0;
		mv = 1;

		scanf("%u %u\n", &x, &y);
		distance = y - x;

		while (distance / 2 >= (unsigned int)mv)
		{
			distance -= mv * 2;
			cnt += 2;
			mv++;
		}

		if (distance >= 1 && distance <= (unsigned int)mv)
		{
			cnt++;
		}
		else if (distance > (unsigned int)mv)
		{
			cnt += 2;
		}

		printf("%d\n", cnt);
	}

	return 0;
}
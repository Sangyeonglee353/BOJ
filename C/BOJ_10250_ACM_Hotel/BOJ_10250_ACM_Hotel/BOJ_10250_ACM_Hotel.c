#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main(void)
{
	int T, H, W, N;
	int floor = 0;
	int room = 0;
	char answer[4 + 1] = { 0x00, };

	scanf("%d", &T);
	while (T--)
	{
		scanf("%d %d %d", &H, &W, &N);
		floor = N & H;
		if (floor == 0)
		{
			floor = H;
		}
		room = ceil((float) N / H);
		sprintf(answer, "%d%02d", floor, (int)room);
		printf("%s\n", answer);

	}
	return 0;
}
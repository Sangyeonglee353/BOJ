// BOJ_2292_¹úÁý(Honeycomb)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main(void)
{
	int i = 1, N; 
	int cnt = 1;
	scanf("%d", &N);
	
	if (N == 1)
	{
		printf("%d", 1);
		return 0;
	}

	while (1)
	{
		if (N >= (3*(pow(i,2)) - 3*i + 2)  && N <= (3*(pow(i,2)) + 3*i + 1))
		{
			printf("%d", cnt + 1);
			break;
		}
		else
		{
			i++;
			cnt++;
		}
	}

	return 0;
}
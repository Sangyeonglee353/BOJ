#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int N, i;
	double Arr[1000], max = 0, sum = 0, avg = 0;
	
	scanf("%d", &N);

	for (i = 0; i < N; i++)
	{
		scanf("%lf", &Arr[i]);
		if (max < Arr[i])
		{
			max = Arr[i];
		}
	}

	for (i = 0; i < N; i++)
	{
		Arr[i] = Arr[i] / max * 100.0;
		sum += Arr[i];
	}
	avg = sum / (double)N;
	printf("%.2lf", avg);
	return 0;
}
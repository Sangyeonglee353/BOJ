// BOJ_4153_Right_triangle, Á÷°¢»ï°¢Çü
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#define size 3
int main(void)
{
	int arr[size] = { 0, };
	int i;
	int max = 0, temp = 0;
	
	while (1)
	{
		for (i = 0; i < size; i++)
		{
			scanf("%d", &arr[i]);
		}

		if (arr[0] == 0 && arr[1] == 0 && arr[2] == 0)
		{
			break;
		}
		else
		{
			max = 0;
			temp = 0;
			for (i = 0; i < size; i++)
			{
				if (max < arr[i])
				{
					max = arr[i];
				}
			}

			for (i = 0; i < size; i++)
			{
				if (arr[i] != max)
				{
					temp += pow(arr[i], 2);
				}
			}

			if (pow(max, 2) == temp)
			{
				printf("right\n");
			}
			else
			{
				printf("wrong\n");
			}
		}
	}
	return 0;
}
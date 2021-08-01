// BOJ_3053_Taxi_geometry, 택시 기하학
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#define PI 3.14159265359

int main(void)
{
	int R;
	double Euclid_area, Non_Euclid_area;

	scanf("%d", &R);

	Euclid_area = PI * pow((double)R, 2);
	Non_Euclid_area = 2 * pow((double)R, 2);

	printf("%lf\n%lf", Euclid_area, Non_Euclid_area);

	return 0;
}
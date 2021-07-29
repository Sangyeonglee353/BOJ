// BOJ_1089_Rectangle, 직사각형에서 탈출하기
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int x, y, w, h;
	int distance_x, distance_y;

	scanf("%d %d %d %d", &x, &y, &w, &h);

	distance_x = w - x <= x ? w-x: x;
	distance_y = h - y <= y ? h-y: y;
	
	printf("%d", distance_x <= distance_y ? distance_x : distance_y);
	return 0;
}
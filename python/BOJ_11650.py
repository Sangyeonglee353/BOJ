# BOJ_11650 좌표 정렬하기
import sys
N = int(sys.stdin.readline())

coord = []
for i in range(N):
    x_y = list(map(int, sys.stdin.readline().split()))
    coord.append(x_y)

coord.sort()

for i in coord:
    print(i[0], i[1])

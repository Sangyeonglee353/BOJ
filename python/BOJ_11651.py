# BOJ_11651 좌표 정렬하기 2
import sys
N = int(sys.stdin.readline())

coord = []
for i in range(N):
    x_y = list(map(int, sys.stdin.readline().split()))
    coord.append(x_y)

coord = sorted(coord, key = lambda x : (x[1], x[0]))

for i in coord:
    print(i[0], i[1])
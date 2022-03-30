# BOJ_10989 수 정렬하기 3
import sys
N = int(input())

list = [0] * 10001

for i in range(N):
    num = int(sys.stdin.readline()) # 속도 향상

    list[num] = list[num] + 1

for i in range(10001):
    if list != 0:
        for j in range(list[i]):
            print(i)
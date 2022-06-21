# BOJ_15652, N과 M(5)
import sys, itertools
input = sys.stdin.readline

# N과 M 입력
N, M = map(int, input().split())

# N개의 수 입력
arr = list(map(int, input().split()))

# 결과 정렬
result = sorted(list(itertools.permutations(arr, M)))

for i in range(len(result)):
    for j in range(len(result[i])):
        if j == len(result[i]) - 1:
            print(result[i][j])
        else:
            print(result[i][j], end=' ')
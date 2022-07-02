# BOJ_10819, 차이를 최대로
import sys
from itertools import permutations

input = sys.stdin.readline
N = int(input())
A = list(map(int, input().split()))

cases = list(permutations(A))

answer = 0
for case in cases:
    mid_sum = 0
    for i in range(N - 1):
        mid_sum += abs(case[i] - case[i + 1])
    answer = max(mid_sum, answer)

print(answer)
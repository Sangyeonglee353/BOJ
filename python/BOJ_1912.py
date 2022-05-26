# BOJ_1912, 연속합
import sys
input = sys.stdin.readline
n = int(input())
# 방법 1
numbers = [int(x) for x in input().split()]

dp = [0] * n
dp[0] = numbers[0]

for i in range(1, n):
	if numbers[i] > dp[i - 1] + numbers[i]:
		dp[i] = numbers[i]
	else:
		dp[i] = dp[i- 1] + numbers[i]

print(max(dp))
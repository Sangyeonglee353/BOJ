# BOJ_9095, 1+2+3
import sys
input = sys.stdin.readline
# 1부터 n까지 1, 2, 3의 합으로 나타낼 수 있는 경우의 수를 저장할 리스트를 만든다.
# n은 양수이며 11보다 작다
dp = [0] * 11

dp[1] = 1
dp[2] = 2
dp[3] = 4

# 반복문으로 이전항을 이용해 1부터 10까지의 경우의 수를 저장한다.
for i in range(4, 11):
    dp[i] = dp[i-3] + dp[i-2] + dp[i-1]

N = int(input())

for _ in range(N):
    value = int(input())
    print(dp[value])

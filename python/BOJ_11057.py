# BOJ_11057, 오르막 수
import sys
input = sys.stdin.readline

N=int(input())

dp=[[0]*10 for _ in range(N+1)]

for i in range(10):
    dp[0][i]=1

for i in range(1, N+1):
    for j in range(10):
        for k in range(j+1):
            dp[i][j] += dp[i-1][k]

print(dp[N][9]%10007)
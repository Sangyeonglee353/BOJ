# BOJ_11052 카드 구매하기
import sys
input = sys.stdin.readline
n=int(input())
p=[0]+list(map(int, input().split()))
dp=[0]*(n+1)
dp[1]=p[1]
for i in range(2, n+1):
    for j in range(1, i+1):
        if dp[i]<dp[i-j]+p[j]:
            dp[i]=dp[i-j]+p[j]
print(dp[n])
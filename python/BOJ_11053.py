# BOJ_11053, 가장 긴 증가하는 부분 수열
import sys
input = sys.stdin.readline
n=int(input())

# 방법 1
numbers = [int(x) for x in input().split()]

# 방법 2
#numbers = list(map(int, input().split()))

# dp[i] = numbers[i]를 마지막 숫자로 가질 때 
# 가장 긴 증가하는 부분 수열의 길이
dp = [1] * n

for i in range(n):
    for j in range(i):
        if numbers[i] > numbers[j]: # 마지막 숫자가 이전 숫자보다 클 경우
            # 이전 숫자인 num[j]를 마지막 숫자로 가질 때 
            # 가장 긴 증가하는 부분 수열의 길이에 1을 더한 값과 비교하여 갱신
            dp[i] = max(dp[i], dp[j] + 1)

print(max(dp))
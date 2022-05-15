# BOJ_1463, 1로 만들기
import sys
input = sys.stdin.readline

N = int(input())

def DP(N):
    for i in range(2, N+1):
        d[i] = d[i-1] + 1

        if all((i%2==0, d[i] > d[i//2] + 1)):
            d[i] = d[i//2] + 1
        if all((i%3==0, d[i] > d[i//3] + 1)):
            d[i] = d[i//3] + 1
    
    return d[N]

d = [0] * (N + 1)

print(DP(N))

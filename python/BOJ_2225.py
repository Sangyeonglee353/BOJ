# BOJ_2225, 합분해
import sys
input = lambda: sys.stdin.readline()

n, k = map(int, input().split())
data=[1]
data += [0]*n

for i in range(1,k+1):
    for j in range(1, n+1):
        data[j]=(data[j]+data[j-1])%1000000000
print(data[n])
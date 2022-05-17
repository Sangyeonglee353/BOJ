# BOJ_11727, 2*n 타일링 2
import sys

input = sys.stdin.readline

def dp(n):
    # dp table 초기화
    d = [0, 1, 3]

    for i in range(3, n+1):
        d.append(d[i-1] + (2*d[i-2]))

    return d[n] % 10007

if __name__ == '__main__':
    n = int(input())

    print(dp(n))
# BOJ_9613 GCD(Greatest Common Divisor)의 합
import sys
input = sys.stdin.readline

def gcd(a, b):
    while b > 0:
        a, b = b, a % b
    return a

N = int(input())

for _ in range(N):
    num_lst = list(map(int, input().split()))
    
    res = 0
    for i in range(1, len(num_lst)):
        for j in range(i + 1, len(num_lst)):
            if num_lst[i] < num_lst[j]:
                res += gcd(num_lst[i], num_lst[j])
            else:
                res += gcd(num_lst[j], num_lst[i])
    print(res)

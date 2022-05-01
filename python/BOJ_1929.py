# BOJ_1929 소수 구하기, decimal_시간초과
import sys
input = sys.stdin.readline
a, b  = input().split()
a = int(a)
b = int(b)

for n in range(a, b):
    if n != 1: # 1은 소수가 아니다
        for i in range(2, n): # 1과 자기자신을 제외한 수로 나뉘면 X
            if n % i == 0:
                break
        else:
            print(n)
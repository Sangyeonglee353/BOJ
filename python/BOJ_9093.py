# BOJ_9093 단어 뒤집기
import sys
input = sys.stdin.readline

N = int(input())

# 방법 1: 반복문 선언
for _ in range(N):
    result = ' '.join([i[::-1] for i in input().split()])
    print(result)

# 방법 2: 람다 함수 선언
for _ in range(N):
    print(' '.join(map(lambda x: x[::-1], input().split())))
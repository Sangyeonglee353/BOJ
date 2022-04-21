# BOJ_10808 알파벳 개수
import sys
input = sys.stdin.readline
string = input()
alpha_dict = {}

# 알파벳 사전 초기화
for i in range(ord('a'), ord('z')+1):
    alpha_dict[chr(i)] = 0

# 각 알파벳별 숫자 카운트
for i in string:
    for j in range(ord('a'), ord('z')+1):
        if ord(i) == j:
            alpha_dict[chr(j)] += 1

# 결과값 출력
for key in alpha_dict:
    print(alpha_dict[key], end=' ')

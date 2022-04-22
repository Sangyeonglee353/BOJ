# BOJ_10809 알파벳 찾기
import sys
input = sys.stdin.readline
string = list(input())
alpha_dict = {}

# 알파벳 사전 초기화
for i in range(ord('a'), ord('z')+1):
    alpha_dict[chr(i)] = -1

# 각 알파벳별 위치 표시
for i in range(len(string)):
    for j in range(ord('a'), ord('z')+1):
        if ord(string[i]) == j:
            if alpha_dict[chr(j)] == -1:
                alpha_dict[chr(j)] = i

# 결과값 출력
for key in alpha_dict:
    print(alpha_dict[key], end=' ')


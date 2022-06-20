# BOJ_15652, N과 M(4)
import sys
input = sys.stdin.readline

# N과 M 입력
N, M = map(int, input().split())

res = [0]*M

def DFS(L, S):
    if L == M:
        # 띄어쓰기
        for x in res:
            print(x, end = ' ')
        print()
    else:
        for i in range(S, N+1):
            res[L] = i
            DFS(L+1, i)
DFS(0, 1)
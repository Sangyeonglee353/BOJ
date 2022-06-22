# BOJ_15655, N 과 M (6)
import sys
input = sys.stdin.readline

# N과 M 입력
N, M = map(int, input().split())

# N만큼 수 입력
a=list(map(int,input().split()))

# 오름차순 정렬
a.sort()

res = [0]*M

def DFS(L, S):
    if L == M:
        # 띄어쓰기
        for x in res:
            print(x, end = ' ')
        print()
    else:
        for i in range(S, N):
            res[L] = a[i]
            DFS(L+1, i+1)
DFS(0, 0)
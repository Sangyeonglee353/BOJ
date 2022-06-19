# BOJ_15650, N과 M (3)
import sys

input = sys.stdin.readline
# N과 M을 입력받음
N, M = map(int, input().split())

result=[]
def dfs(start):
    if len(result)==M:
        for re in result:
            print(re,end=' ')
        print()
        return
    else:
        for i in range(1,N+1):
            result.append(i)
            dfs(start+1)
            result.pop()
dfs(0)
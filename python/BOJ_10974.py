# BOJ_10974, 모든 순열
import sys
input = sys.stdin.readline

def DFS(depth):
    global ans

    if depth == n:
        print(*visited)
    else:
        for i in range(n):
            if i + 1 in visited:
                continue
            visited[depth] = i + 1
            DFS(depth + 1)
            visited[depth] = 0


n = int(input())
visited = [0] * n
DFS(0)
# BOJ_15657, N과 M (8)
def dfs(l):
    if len(q) == M:
        print(' '.join(map(str, q)))
        return

    for i in range(l, N):
        q.append(a[i])
        dfs(i)
        q.pop()


q = []
N, M = map(int, input().split())
a = list(map(int, input().split()))
a.sort()
dfs(0)
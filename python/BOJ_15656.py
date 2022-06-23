# BOJ_15656, N 과 M (7)
import sys
input = sys.stdin.readline

# N과 M 입력
N, M = map(int, input().split())

# N만큼 수 입력
a=list(map(int,input().split()))

# 오름차순 정렬
a.sort()

#같은 수를 여러번 골라도 된다. == 순서가 상관없다.
temp = []
def solve():
    global temp
    
    if len(temp) == M:
        print(*temp)
        return
        
    for i in range(N):
        temp.append(a[i])
        solve()
        temp.pop()

solve()
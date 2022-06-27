# BOJ_15665, N & M (11)
import sys
input = sys.stdin.readline

N, M=map(int,input().split())

lst=list(map(int,input().split()))

def solve(num,ans):
    if len(ans)==num:
        
        for i in ans:
            print(lst[i],end=' ')
        print()
        
        return
    
    for i in range(0,len(lst)):
        solve(num,ans+[i])
lst=list(set(lst))
lst.sort()
for i in range(len(lst)):
    solve(M,[i])
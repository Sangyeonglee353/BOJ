# BOJ_1932, 정수 삼각형
import sys
input = sys.stdin.readline
n=int(input()) # 수 입력받음 
arr=[[0]*n for _ in range(n)]
for i in range(n):
    arr[i] = list((map(int,input().split())))

res=[[0]*n for _ in range(n)] 
# 경우의 수 고려한 누적 합 담아놓을 저장소
res[0]=[arr[0][0]]#스타트는 그대로 복사해서 시작

for i in range(1,n): # 행 따지기
    # 1행  2행  3행  4행  .. 0행은 건너뛰어 하나니깐
    for j in range(i+1): # 열 따지기
        # 1행은 0 1 (두열), 2행은 0 1 2 (세열)
        if j==0 :
            res[i][j]+=res[i-1][0]+arr[i][0] #전자는 이전 누적값 더하는 것-후자는 현재 값
        elif j==i :
            res[i][j]+=res[i-1][j-1]+arr[i][j]
        else : 
            res[i][j]+=max(res[i-1][j],res[i-1][j-1])+arr[i][j]
print(max(res[n-1]))
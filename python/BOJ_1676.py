# BOJ_1676, 팩토리얼 0의 개수
N = int(input())
def fact(N):
    if N == 0:
        return 1
    elif N == 1:
        return N
    else:
        return N*fact(N-1)
        
N = fact(N)
cnt = 0
while N % 10 == 0:
    N = N // 10
    cnt += 1
print(cnt)
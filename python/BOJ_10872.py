# BOJ_10872, 팩토리얼_Factorial
N = int(input())
def fact(N):
    if N == 0:
        return 1
    elif N == 1:
        return N
    else:
        return N*fact(N-1)
print(fact(N))
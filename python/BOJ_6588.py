# BOJ_6588, 골드바흐의 추측_Goldbach's conjecture_시간초과
import sys
input = sys.stdin.readline

def isPrime(num):
    if num==1:
        return False
    else:
        for i in range(2, int(num**0.5)+1):
            if num%i == 0:
                return False
        return True

def primeAdd(N):
    prime_lst = []
    for i in range(1, N+1):
        if isPrime(i):
            prime_lst.append(i)

    #print(prime_lst)
    prime_add_lst = []
    for i in range(0, len(prime_lst)):
        for j in range(i, len(prime_lst)):
            if (prime_lst[i] + prime_lst[j]) == N:
                prime_add_lst.append([prime_lst[i], prime_lst[j]])
    #print(prime_add_lst)

    max = 0
    max_idx = 0
    if len(prime_add_lst) > 2:
        for i in range(0, len(prime_add_lst)):
            if max < (prime_add_lst[i][1] - prime_add_lst[i][0]):
                max = prime_add_lst[i][1] - prime_add_lst[i][0]
                max_idx = i

    a = prime_add_lst[max_idx][0]
    b = prime_add_lst[max_idx][1]

    print("{0} = {1} + {2}".format(N, a, b))

while True:
    N = int(input())
    if N == 0:
        break
    primeAdd(N)
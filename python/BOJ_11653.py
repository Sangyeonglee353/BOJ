# BOJ_11653, 소인수분해_Primefacotization
N = int(input())
for i in range(2, N+1):
    while(N % i == 0):
        print(i)
        N /= i



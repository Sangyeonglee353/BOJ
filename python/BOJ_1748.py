# BOJ_1748, 수 이어 쓰기 1
N = input()
length = len(N) - 1
res = 0

for i in range(length): # 자릿수 계산
    res += 9 * 10 ** i * (i+1)

res += (int(N) - (10 ** length) + 1) * (length + 1)

print(res)
# BOJ_2108 통계학| 산술평균, 중앙값, 최빈값, 범위
N = int(input())

list = []
for i in range(N):
    list.append(int(input()))

# 산술평균
sum = 0
for i in range(N):
    sum += list[i]

print(sum // N)

# 중앙값
list.sort()
print(list[N//2])


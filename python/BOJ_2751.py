# BOJ_2751_선택 정렬_시간초과....
N = int(input())

list = []
for i in range(N):
    list.append(int(input()))

for i in range(0, N - 1):
    min_idx = i
    for j in range(i+1, N):
        if list[j] < list[min_idx]:
            min_idx = j
    list[i], list[min_idx] = list[min_idx], list[i]

for i in list:
    print(i)
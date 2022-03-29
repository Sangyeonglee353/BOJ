# BOJ_2751_버블 정렬_시간초과....
N = int(input())

list = []
for i in range(N):
    list.append(int(input()))

for i in range(N) : 
    for j in range(N) : 
        if list[i] < list[j] : 
            list[i], list[j] = list[j], list[i]

for i in list:
    print(i)

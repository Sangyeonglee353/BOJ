# BOJ_2750 수 정렬하기
n = int(input())
list = []
for i in range(n):
    list.append(input())

list.sort()

for i in range(n):
    print(list[i])
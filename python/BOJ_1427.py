# BOJ_1427 소트인사이드
N = input()

num = list(N)

# 내림차순 정렬
num.sort(reverse=True)
for i in num:
    print(i, end='')
# BOJ_2309, 일곱 난쟁이
import sys
input = sys.stdin.readline

# 값 입력
keys = []
one = 0
two = 0

for i in range(0, 9):
    keys.append(int(input()))

sum_val = sum(keys)
for i in range(8):
    for j in range(i+1, 9):
        # 데이터 합에서 2개 골라 뺏을때 100이면
        if sum_val-(keys[i]+keys[j])==100:
            one = keys[i]
            two = keys[j]
# 리스트에서 고른값 제거
keys.remove(one)
keys.remove(two)

# 정렬
keys.sort()
for i in keys:
    print(i)
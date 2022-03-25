# BOJ_2480 주사위 세개
i, j, k = map(int, input().split())
money = 0
if i == j and i == k:
    money = 10000 + i * 1000
elif i == j and i != k:
    money = 1000 + i * 100
elif i == k and i != j:
    money = 1000 + i * 100
elif j == k and j != i:
    money = 1000 + j * 100
else:
    if i > j:
        if i > k:
            money = i * 100
        else:
            money = k * 100
    else:
        if j > k:
            money = j * 100
        else:
            money = k * 100
print(money)
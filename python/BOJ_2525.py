# BOJ_2525 오븐시계
hh, mm = map(int, input().split())
plus = int(input())
mm = mm + plus
while mm >= 60:
    hh = hh + 1
    mm = mm - 60    
    if hh >= 24:
        hh = hh - 24
print(hh, mm, sep=' ')
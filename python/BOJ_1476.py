# BOJ_1476, 날짜 계산
import sys
input = sys.stdin.readline

def date_calculation(E, S, M): # (1 ≤ E ≤ 15, 1 ≤ S ≤ 28, 1 ≤ M ≤ 19)
    cnt = 1

    while True:
        earth = cnt % 15

        if earth == 0:
            earth = 15

        sun = cnt % 28

        if sun == 0:
            sun = 28

        moon = cnt % 19

        if moon == 0:
            moon = 19

        if all((earth is E, sun is S, moon is M)):
            break
        else:
            cnt += 1
            
    return cnt

E, S, M = map(int,input().split())  # 지구, 태양, 달
            
print(date_calculation(E, S, M))
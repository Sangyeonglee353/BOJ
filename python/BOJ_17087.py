# BOJ_17087 숨바꼭질 6
import sys
input = sys.stdin.readline

def gcd(a, b):
    while b > 0:
        a, b = b, a % b
    return a

N, S = map(int, input().split())
pos_lst = list(map(int, input().split()))
diff = []

# 찾은 위치 구하기
for pos in pos_lst:
    diff.append(abs(S-pos))

# 변수값 설정
x = diff[0]

# 최대 공약수의 최대값 구하기
for i in diff:
    x = gcd(x, i)

# 최대값 출력
print(x)


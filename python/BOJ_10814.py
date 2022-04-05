# BOJ_10814 나이순 정렬
import sys
N = int(sys.stdin.readline())

info = []
for i in range(N):
    age, name = sys.stdin.readline().split()
    age = int(age)
    info.append((age, name))

info = sorted(info, key = lambda x : x[0])

for age, name in info:
    print(age, name)

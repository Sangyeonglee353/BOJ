# BOJ_10973, 이전 순열
import sys
input = sys.stdin.readline

n = int(input())
data = list(map(int, input().split()))

for i in range(n-1, 0, -1): # 맨 뒤 값부터 시작
    if data[i] < data[i-1]:
        for j in range(n-1, 0, -1): # 다시 맨 뒤 값부터 큰 값찾기
            if data[j] < data[i-1]:
                data[j], data[i-1] = data[i-1], data[j] # 둘 값을 swap
                data = data[:i] + sorted(data[i:], reverse=True)
                print(*data)
                exit(0)
print(-1)
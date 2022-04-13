# BOJ_1158, 요세푸스 문제

# 1, 2, 3, 4, 5, 6, 7
# 1, 2, 4, 5, 6, 7
# 1, 2, 4, 5, 7
# 1, 4, 5, 7
# 1, 4, 5
# 1, 4
# 4

import sys
input = sys.stdin.readline
N, K = input().split(' ')

CircularQueue = []
for i in range(int(N)):
    CircularQueue.append(i+1)

result = []
index = 0

while len(CircularQueue) != 0:
    index += int(K) -1

    if index >= len(CircularQueue):
        index = index % len(CircularQueue)

    result.append(CircularQueue.pop(index))

print("<", ", ".join(str(i) for i in result)[:], ">", sep="")


# BOJ_1406, 에디터
import sys
from collections import deque

str = list(input())
input = sys.stdin.readline
N = int(input())

deq = deque()
temp = deque()

deq.extend(str)

for _ in range(N):
    command = input().split()
    if command[0] == "L":
        if len(deq) != 0:
            temp.appendleft(deq.pop())
    elif command[0] == "D":
        if len(temp) != 0:
            deq.append(temp.popleft())
    elif command[0] == "B":
        if len(deq) != 0:
            deq.pop()
    elif command[0] == "P":
        deq.append(command[1])

print("".join(deq) + "".join(temp))
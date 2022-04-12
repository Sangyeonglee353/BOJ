# BOJ_10845, 큐
import sys
input = sys.stdin.readline
N = int(input())

queueData = []
for _ in range(N):
    # split()을 쓰면 리스트 형태로 저장
    command = input().split()
    if command[0] == "push":
        queueData.append(command[1])
    elif command[0] == "pop":
        if len(queueData) == 0:
            print(-1)
        else:
            print(queueData.pop(0))
    elif command[0] == "size":
            print(len(queueData))
    elif command[0] == "empty":
        if len(queueData) == 0:
            print(1)
        else:
            print(0)
    elif command[0] == "front":
        if len(queueData) == 0:
            print(-1)
        else:
            print(queueData[0])
    elif command[0] == "back":
        if len(queueData) == 0:
            print(-1)
        else:
            print(queueData[-1])
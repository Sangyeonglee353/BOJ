# BOJ_9465 스티커
import sys
input = sys.stdin.readline
num = int(input())

for i in range(num):
    n = int(input())
    li = []
    li.append(list(map(int,input().split())))
    li.append(list(map(int,input().split())))

    max_list = [[] for i in range(n)]

    max_list[0] = [li[0][0],li[1][0]]

    for i in range(1,n):
        max_list[i].append(max(max_list[i-1][0],li[0][i]+max_list[i-1][1]))
        max_list[i].append(max(max_list[i-1][1],li[1][i]+max_list[i-1][0]))

    print(max(max_list[n-1]))
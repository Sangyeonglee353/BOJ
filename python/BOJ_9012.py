# BOJ_9012 괄호
import sys
input = sys.stdin.readline
N = int(input())

for _ in range(N):
    bracket = input()
    result = 0
    for s in bracket:
        if s == '(':
            result += 1
        elif s == ')':
            if result == 0:
                print("NO")
                break
            else:
                result -= 1
        else:
            if result == 0:
                print("YES")
            else:
                print("NO")
            


            
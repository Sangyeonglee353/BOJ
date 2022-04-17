# BOJ_17298, 오큰수
# 오른쪽에 잇으면서 A_i보다 큰 수 중에서 가장 왼쪽에 있는 수
# 여기서 배열 i는 0이 아닌 1부터 적용된다.
import sys
input = sys.stdin.readline
N = int(input())

Numbers = list(map(int, input().split()))

stack = []
result = [-1 for _ in range(N)] # 오큰수 못찾은 곳은 -1로 출력하기 위해

stack.append(0)
i = 1

while stack and i < N: # 스택에 값이 있고, i가 N보다 작을 때만
    # 스택에 값이 있고, 스택의 제일 위에 있는 인덱스에 해당하는 값도바 인덱스 i의 값이 크면
    while stack and Numbers[stack[-1]] < Numbers[i]:
        result[stack[-1]] = Numbers[i] # result 리스트의 해당 인덱스에 값 저장
        stack.pop() # 오큰수를 찾은 인덱스는 pop

    stack.append(i)
    i += 1

for i in result:
    print(i, end = " ")
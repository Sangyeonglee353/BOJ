# BOJ_1935, 후위 표기식 2
# 피연산자를 만나면 push / 연산자 만나면 pop
# 전체 숫자 수 입력
N = int(input())

# 후위 표기식 입력
string = list(input())

# 숫자 입력
nums = [0] * N # 피연산자에 대응하는 값 받을 리스트 선언
for i in range(N):
    nums[i] = int(input()) # 피연산자에 대응하는 값 받기

# 스택 선언
stack = []

for i in string:
    # if i.isalpha():와 동일
    if i.isalpha(): # 피연산자 만나면
        stack.append(nums[ord(i) - ord('A')]) # 스택에 저장
    else:
        str2 = stack.pop() # 스택에 저장되어 있던 피연산자 두개 pop
        str1 = stack.pop()

        if i == '+':
            stack.append(str1 + str2)
        elif i == '-':
            stack.append(str1 - str2)
        elif i == '*':
            stack.append(str1 * str2)
        elif i == '/':
            stack.append(str1 / str2)

# 마지막에 스택에 남아있는 값 소수점 둘째자리까지 출력
print('%.2f' %stack[0])
# BOJ_1918, 후위 표기식_
# 예제 1~4까지 모두 성공인데... 실패란다.
# 중위 표기식 입력
string = list(input())

# 스택 선언
stack = []  # 연산자 임시저장용
result = []  # 결과값 저장용
for i in string:
    if i.isalpha():  # 피연산자 만나면
        result.append(i)
    else:  # 연산자라면
        if i == '+':
            if len(stack) > 1:
                if stack[-1] == '*' or stack[-1] == '/':
                    for j in range(len(stack)):
                        op = stack.pop()
                        result.append(op)
            stack.append(i)
        elif i == '-':
            if len(stack) > 1:
                if stack[-1] == '*' or stack[-1] == '/':
                    for j in range(len(stack)):
                       op = stack.pop()
                       result.append(op)
            stack.append(i)
        elif i == '*':
            stack.append(i)
        elif i == '/':
            stack.append(i)

for i in range(len(stack)):
    op = stack.pop()
    result.append(op)

for i in result:  # 결과 출력
    print(i, end='')

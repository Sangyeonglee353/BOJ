# BOJ_스택 수열
import sys
input = sys.stdin.readline
N = int(input())

check_list = []
for _ in range(N):
    check_list.append(int(input()))
# 숫자를 담을 리스트 생성. push와 pop 실행 내용을 담을 리스트 생성
number_list , res_list = [], []
i = 0
number = 1
while i < N: # pop명령실행횟수가 N과 같아지면 반복문을 종료
    if len(number_list) < 1: # 스택을 쌓을 리스트가 비어있으면 스택명령 실행
        number_list.append(number)
        number += 1
        res_list.append('+')
    if number_list[-1] == check_list[i]:
        number_list.pop()
        res_list.append('-')
        i += 1 # pop명령 실행횟수를 기록 - pop 명령실행횟수가 N과 같아지면 반복문을 종료
    else: # 숫자의 크기가
        if number <= N:
            number_list.append(number)
            number += 1
            res_list.append('+')
        elif number == N + 1:
            #값을 끝까지 담고 조건에 맞지 않아서 pop을 실행하지 못하면 'NO' 저장 및 반복문 종료
            res_list = ['NO']
            break
for i in range(len(res_list)):
    if i == len(res_list) - 1:
        sys.stdout.write(f'{res_list[i]}')
    else:
        sys.stdout.write(f'{res_list[i]}\n')
# BOJ_1373, 2진수 to 8진수
# 2진수로 입력 받기
N = int(input(), 2)
# 진법 표시 지우기
#print(oct(N)[2:])
# 다른출력 방법
print(format(N, 'o'))
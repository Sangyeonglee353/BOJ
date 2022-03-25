
# 1. 데이터 입력 받기
input_num = input()

print()

# 2. 데이터 자릿수 저장하기
num_len = len(input_num)

# 3. 데이터를 정수형으로 변환
int_num = int(input_num)
org_num = int_num

# 4. 데이터 자릿수에 따라 각 자리수 출력하기
for i in range(0, num_len):
    sub_digit = 10 ** (num_len - 1)
    cur_digit = int_num // sub_digit
    print("{}번째 숫자: {}".format(i+1, cur_digit))
    int_num = int_num - (cur_digit * sub_digit)
    if num_len != 0:
        num_len = num_len -1

# 5. 분해합 구하기

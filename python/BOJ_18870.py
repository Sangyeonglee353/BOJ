# BOJ_18870 좌표 압축
# 좌표 압축이란?
# 여러 곳에 흩뿌려진 좌표들을 연속된 수들로 모아 압축하는 것
# 주어진 값 중 가장 작은 값부터 0으로 인덱스를 부여하는 방식
import sys
N = int(sys.stdin.readline())

# 공백 제거 후 리스트에 저장
numbers = list(map(int, sys.stdin.readline().rstrip().split()))

# 중복값 제거
numbers_set = set(numbers)
numbers_list = list(numbers_set)
numbers_list.sort()

# 사전을 만들고, 각 키에 해당하는 값을 인덱스로 저장
numbers_dict = {}
for i in range(len(numbers_list)):
    numbers_dict[numbers_list[i]] = i

# 결과값 출력
for i in numbers:
    print(numbers_dict[i], end=' ')

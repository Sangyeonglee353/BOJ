# BOJ_10824 네 수
import sys
input = sys.stdin.readline
num_list = input().split(' ')
tmp1 = int(str(num_list[0] + str(num_list[1])))
tmp2 = int(str(num_list[2] + str(num_list[3])))
result = tmp1 + tmp2
print(result)
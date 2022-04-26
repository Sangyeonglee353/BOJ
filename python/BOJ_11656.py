# BOJ_11656 접미사 배열
import sys
input = sys.stdin.readline
string = list(input().rstrip())
suffix_lst =[]
for i in range(len(string)):
    result = ''
    for j in range(i, len(string)):
        result = result + string[j]
    suffix_lst.append(result)
    result = ''

# 정렬 및 결과 출력
suffix_lst_sort = sorted(suffix_lst)
for i in suffix_lst_sort:
    print(i)
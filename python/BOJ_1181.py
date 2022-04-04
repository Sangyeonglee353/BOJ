# BOJ_1181 단어 정렬
import sys

N = int(sys.stdin.readline())

word = []
for i in range(N):
    # 개행문자 제거 후 저장
    word.append(sys.stdin.readline().strip())

# 중복 제거
word = list(set(word))

# 단어 정렬
word.sort(key=lambda x : (len(x), x))

for i in word:
    print(i)
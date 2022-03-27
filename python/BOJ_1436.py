# BOJ_1436, 영화감속 숍
n = int(input())
checkStr = str(666)
count = 0
while True:
    if '666' in checkStr:
        count += 1
    if count == n:
        print(checkStr)
        break
    checkStr = str(int(checkStr) + 1)

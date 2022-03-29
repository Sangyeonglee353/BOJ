j = str(666)
print(j)
count = 0
while True:
    if '666' in j:
        count = count + 1
        print(count)
        print(j)
    j = str(int(j) + 2)
    if count == 10:
        break
    
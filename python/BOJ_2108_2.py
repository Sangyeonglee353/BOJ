# BOJ_2108_2 이 코드는 왜 되는거지???
from collections import Counter

def most_frequency(sort_num):
    a = Counter(sort_num)
    a = a.most_common()

    max_val = a[0][1] # 첫번째 값을 가장 흔한 갯수로 판단
    tmp = []

    for i in range(len(a)): # 같은 애들만 tmp 리스트에 추가해줘서, 진짜진짜 흔한 애들로만 구성하도록
        if a[i][1] == max_val:
            tmp.append(a[i])
        else:
            break; # 다른 값이 나오면, 이 뒤로는 아닌 애들만 나올거니까 바로 break 시켜줬다
    
    if len(tmp) == 1: # 진짜 max값만 가지고 있는 애들 중에서도 하나만 있는 애들이 있을 수 있으니, 한개만 있으면 바로 반환
        return tmp[0][0]
    else:
        return tmp[1][0]
    
N = int(input())
num_list = []
num_dic = {}
for i in range(N):
    tmp = int(input())
    num_list.append(tmp)


sort_num = sorted(num_list)

avg = round(sum(num_list) / N)
mid = sort_num[len(sort_num) // 2]
most_fre = most_frequency(sort_num)
range_val = max(num_list) - min(num_list)

print("%d" %avg)
print("%d" %mid)
print("%d " %most_fre)
print("%d" %range_val)
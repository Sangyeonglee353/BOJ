# BOJ_2108 통계학| 산술평균, 중앙값, 최빈값, 범위
import sys
from collections import Counter

N = int(sys.stdin.readline())
nums = [int(sys.stdin.readline()) for _ in range(N)]
    
nums.sort() # 정렬
top_num = Counter(nums).most_common() # 빈도수 계산

# 산술평균
print("%.f"%(sum(nums)/N))

# 중앙값
print(nums[N//2])

# 최빈값
if len(nums) > 1: 
    # 최빈값이 동일한게 존재한다면
    if top_num[0][1] == top_num[1][1]:
        print(top_num[1][0]) 
    else: 
        print(top_num[0][0]) 
else: 
    print(nums[0]) 

# 범위
print(nums[-1] - nums[0])
# BOJ_2751_병합 정렬_시간초과....
N = int(input())

list = []
for i in range(N):
    list.append(int(input()))

def merge_sort(a):
    n = len(a)
    # 종료 조건: 정렬할 리스트의 자료 개수가 한 개 이하이면 정렬할 필요 없음
    if n <= 1: return a

    mid = n // 2 # 중간을 기준으로 두 그룹으로 나눔
    g1 = merge_sort(a[:mid]) # 재귀 호출로 첫 번째 그룹을 정렬
    g2 = merge_sort(a[mid:]) # 재귀 호출로 두 번째 그룹을 정렬
    # 두 그룹을 하나로 병합
    result = [] # 두 그룹을 합쳐 만들 최종 결과
    while g1 and g2: # 두 그룹에 모두 자료가 남아 있는 동안 반복
        if g1[0] < g2[0]: # 두 그룹의 맨 앞 자료 값을 비교
            # g1 값이 더 작으면 그 값을 빼내어 결과로 추가
            result.append(g1.pop(0))
        else:
            # g2 값이 더 작으면 그 값을 빼내어 결과로 추가
            result.append(g2.pop(0))
    # 아직 남아 있는 자료들을 결과에 추가
    # g1과 g2 중 이미 빈 것은 while를 바로 지나감
    while g1:
        result.append(g1.pop(0))
    while g2:
        result.append(g2.pop(0))
    return result

list = merge_sort(list)

for i in list:
    print(i)
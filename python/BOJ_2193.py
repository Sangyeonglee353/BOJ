# BOJ_2193, 이진수
import sys
input = sys.stdin.readline
n=int(input())

d=[0]*90
def fibo(x):
  d[0]=1
  d[1]=1
  for i in range(2,x):
    d[i]=d[i-2]+d[i-1]
  
  return d[x-1]

if n==1 or n==2:
  print(1)
else:
  print(fibo(n))
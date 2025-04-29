from math import comb
from collections import Counter as data
n=int(input())
arr=sorted([*map(int,input().split())][:n])
d=data(arr)
first,second=arr[0],arr[-1]
prod=d[first]*d[second]
num=second-first
ans=comb(n,2)
if num==0:print(num,ans)
else:print(num,prod)

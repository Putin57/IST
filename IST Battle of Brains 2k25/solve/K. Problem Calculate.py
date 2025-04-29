from itertools import permutations as p
for _ in range(1,int(input())+1):
    n,m=map(int,input().split())
    arr=[*map(int,input().split())][:n]
    if m==1:print(f"Case {_}: {n}");continue
    ans=0
    for i in p(arr,m):
        if abs(i[0]-i[1])<=2:ans+=1
    print(f"Case {_}: {ans+n}")

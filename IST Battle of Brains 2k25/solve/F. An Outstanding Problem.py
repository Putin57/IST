for _ in range(int(input())):
    n,c,q=map(int,input().split())
    s=input()
    if s!='istdhanmondi':s=s[:n]
    for _ in range(c):
        l,r=map(int,input().split())
        s+=s[l-1:r]
    for _ in range(q):
        print(s[int(input())-1])

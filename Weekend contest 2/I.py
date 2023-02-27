a,b,c=map(int,input().split())
if a%c==0:
    x=a//c
else:
    x=(a//c)+1
if b%c==0:
    y=b//c
else:
    y=(b//c)+1
print(x*y)
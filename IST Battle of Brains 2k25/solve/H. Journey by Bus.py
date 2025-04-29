n,m=map(int,input().split())
a=n//45+(n%45>0)
b=m//45+(m%45>0)
c=45-(n%45)
if c==45:c=0
print(a,b,c)

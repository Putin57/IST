from math import sqrt
from fractions import Fraction
for _ in range(int(input())):
    a,b,c=map(int,input().split())
    s=(a+b+c)/2
    area=(sqrt(s*(s-a)*(s-b)*(s-c))/s)**2
    num=Fraction(area).limit_denominator(1000000)  
    print(num if "/" in str(num) else str(num)+"/1")

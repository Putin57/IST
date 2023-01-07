Wide,Height,x,y,r = map(int,input().split())
if 0<x<Wide and 0<y<Height:
    if 0<y<Wide and 0<x<Height:
        if 0<(3.1416*r**2)<(Wide*Height):
            print("Yes")
else:
    print("No")
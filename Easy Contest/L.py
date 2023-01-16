li1=["1","3","5","7","8","10","12"]
li2=["4","6","9","11"]
li3=["2","2"]
x,y=map(str,input().split())
if x in li1:
    if y in li1:
        print("Yes")
    else:
        print("No")
elif x in li2:
    if y in li2:
        print("Yes")
    else:
        print("No")
else:
    print("No")
x=int(input())
x1=str(x)
a="000111222333444555666777888999"
if x1=="1000":
    print("Yes")
elif x1[0:3] in a:
    print("Yes")
else:
    print("No")
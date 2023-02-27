y=int(input())
while True:
    y=y+1
    if len(set(str(y)))==len(str(y)):
        break
print(y)

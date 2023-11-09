def average(p,k,g):
    return (p+k+g)/3

arr=[]
for i in range(int(input())):
    roll,name,phy,cse,it=map(str,input().split())
    roll=int(roll);phy=int(phy);cse=int(cse);it=int(it)
    avg=average(phy,cse,it)
    arr.append((i+1,roll,name,avg))
arr.sort(key=lambda x:x[3],reverse=True)
for x,y in enumerate(arr):
    i,roll,name,avg=y 
    print(x+1,roll,name,round(avg,2))

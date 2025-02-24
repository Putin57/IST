def bub_sort():
    n=int(input("Enter the size of array: "))
    arr=[*map(int,input("Enter the numbers for array: ").split())][:n]
    for i in range(n-1,0,-1):
        for j in range(i):
            if arr[j]>arr[j+1]:arr[j],arr[j+1]=arr[j+1],arr[j]
    print("The sorted array is:",*arr)

if __name__=="__main__":
    bub_sort()

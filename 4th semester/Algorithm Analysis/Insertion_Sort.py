def insertion_sort():
    n=int(input("Enter the size of array: "))
    arr=[*map(int,input("Enter the element of array: ").split())][:n]
    for i in range(1,n):
        item=arr[i]
        j=i-1
        while 0<=j and arr[j]>item:
            arr[j+1]=arr[j]
            j-=1
            arr[j+1]=item
    return arr;
if __name__=="__main__":
    ss=insertion_sort()
    print("The sorted array is: ",*ss)

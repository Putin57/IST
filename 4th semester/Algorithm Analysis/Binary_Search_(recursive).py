def binary_search(arr,left,right,search):
    if left<=right:
        mid=(left+right)//2
        if arr[mid]==search:return mid
        elif arr[mid]>search:
            return binary_search(arr,left,mid-1,search)
        else:return binary_search(arr,mid+1,right,search)
    else:return -1;

if __name__=="__main__":
    n=int(input("Enter the size of array: "))
    arr=sorted([*map(int,input("Enter the number of array: ").split())][:n])
    search=int(input("Enter the search element: "))
    if binary_search(arr,0,n-1,search)!=-1:print("The number is found...")
    else:print("The number is not found...")

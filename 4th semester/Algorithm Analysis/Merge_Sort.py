def merge(arr:list)->list:
    if len(arr)>1:
        left,right=arr[:len(arr)//2],arr[len(arr)//2:]
        merge(left)
        merge(right)
        i,j,k=0,0,0
        while i<len(left) and j<len(right):
            if left[i]<right[j]:
                arr[k]=left[i]
                i+=1
            else:
                arr[k]=right[j]
                j+=1
            k+=1
        while i<len(left):
            arr[k]=left[i]
            k+=1
            i+=1
        while j<len(right):
            arr[k]=right[j]
            k+=1
            j+=1
    return arr

if __name__=="__main__":
    n=int(input("Enter the size of array: "))
    arr=[*map(int,input("Enter the element of array: ").split())][:n]
    print("The sorted array :",*merge(arr))

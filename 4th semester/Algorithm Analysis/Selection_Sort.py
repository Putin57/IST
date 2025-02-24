def selection_sort():
    n=int(input("Enter the size of array: "))
    arr=[*map(int,input("Enter yours numbers for array: ").split())][:n]
    for i in range(n-1):
        mini=i
        for j in range(i,n):
            if arr[j]<arr[mini]:mini=j
        arr[i],arr[mini]=arr[mini],arr[i]
    return arr;

if __name__=="__main__":
    print("The sorted array is :",*selection_sort())

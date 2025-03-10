"""
    Quick sort 
    time complexity: O(n^2)
    space complexity: O(n)
"""

def quick_sort(arr:list)->list:
    if len(arr)<=1:return arr
    pivot=arr[0]
    smaller=[i for i in arr[1:]if i<=pivot]
    greater=[i for i in arr[1:]if i>pivot]
    return quick_sort(smaller)+[pivot]+quick_sort(greater);

if __name__=="__main__":
    arr=[*map(int,input().split())]
    print(*quick_sort(arr))


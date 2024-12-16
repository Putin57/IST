// 2. Write a program to search an element from an array using binary search algorithm.
/*
--------------------------------------------------------------------
|Algorithm:                                                        |
|step-1: set Beg:=LB, End:=UB and                                  |
|        mid=Int((Beg + End))                                      |
|step-2: Repeat steps 3 and 4 while Beg <= End and data[mid]!=Item |
|step-3: If Item<Data[mid],then:                                   |
|            set End:=mid-1                                        |
|        else:                                                     |
|            set Beg:=mid+1                                        |
|step-4: set Mid:=Int((Beg+End)/2)                                 |
|step-5: If Data[mid]=Item, then:                                  |
|          set LOC:=mid                                            |
|        Else:                                                     |
|            set LOC:=NULL                                         |
|step-6: Exit                                                      |
_-------------------------------------------------------------------
*/

#include <bits/stdc++.h>
using namespace std; 

int main(){
    int n, search_item;
    cout << "Enter the size of array: ";
    cin >> n;
    int arr[n+1];
    cout << "Enter the sorted element of the array: ";
    for(int i = 1; i <= n; i++){
        cin >> arr[i];
    }
    cout << "Enter the search item: ";
    cin >> search_item;
    int begin = 1, endd = n + 1;
    while (begin <= endd){
        int mid = (begin + endd)/2;
        if(arr[mid] == search_item){
            cout << "Search element found in index " << mid << '\n';
            return 0;
        }
        else if(arr[mid] < search_item){
            begin = mid + 1;
        }
        else{
            endd = mid - 1;
        }
    } 
    cout << "Sorry!!.. The search item not found in the array..\n";
    return 0;
}




/*
----------------------------
time complexity: O(log(n))
space complexity: O(n)
---------------------------
*/

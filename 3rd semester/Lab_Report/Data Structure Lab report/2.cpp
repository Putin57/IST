// 2. Write a program to search an element from an array using Linear Search algorithm.
/*
-----------------------------------------------------
|Algorithm:                                          |
|step-1: set K:=1 and LOC :=0                        |
|step-2: Repeat steps 3 and 4 while LOC=0 and k<=N   |
|step-3:     If ITEM=Data[k],then:                   |
|                set LOC:=K                          |
|step-4:     set K:=k+1                              |
|step-5: If LOC=0, then:                             |
|            write:Item is not in array Data         |
|        else:                                       |
|            write: LOC is location of Item          |
|step-6: Exit                                        |
-----------------------------------------------------
*/

#include <bits/stdc++.h>
using namespace std; 

int main(){
    int n, search_item;
    cout << "Enter the size of array: ";
    cin >> n;
    int arr[n + 1];
    cout << "Enter the elements of the Array: ";
    for(int i = 1; i <= n; i++){
        cin >> arr[i];
    }
    cout <<"Search element: ";
    cin >> search_item;
    for(int i = 1; i <= n; i++){
        if(arr[i] == search_item){
            cout << "Search Element found in index " << i << '\n';
            return 0;
        }
    }
    cout << "Sorry!! Element not found..\n";
    return 0;
}

/*
------------------
time complexity: O(n)
space complexity: O(n)
------------------
*/

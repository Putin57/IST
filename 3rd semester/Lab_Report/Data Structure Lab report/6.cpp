// 6. Write a program to sort an array using bubble sort
/*
--------------------------------------------------------
|Algorithm:                                            |
|step-1: Repeat steps 2 and 3 for K=1 to N-1           | 
|step-2: set ptr:=1                                    | 
|step-3: Repeat while ptr<=N-K:                        | 
|            (a)If Data[ptr]>Data[ptr+1],Then:         | 
|                Interchange Data[ptr] and Data[ptr+1] | 
|            (b)set ptr:=ptr+1                         | 
|step-4: Exit                                          | 
--------------------------------------------------------
*/

#include <bits/stdc++.h>
using namespace std; 

int main(){
    cout << "\nEnter the size of array: ";
    int n; cin >> n;
    int arr[n + 1];
    cout << "Enter the element of array: ";
    for(int i = 1; i <= n; i++){
        cin >> arr[i];
    }
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n - i - 1; j++){
            if(arr[j] > arr[j + 1]){
                int tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
            }
        }
    }
    cout << "After the sorting of the array is : ";
    for(int i = 1; i <= n; i++){
        cout << arr[i] << ' ';
    }
    cout << '\n' << '\n';
    return 0;
}


/*
-------------------------
time complexity: O(n^2)
space complexity: O(n)
-------------------------
*/

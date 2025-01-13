#include <bits/stdc++.h>
using namespace std; 

vector<int>merge_sort(int n, vector<int>&arr){
    if(n > 1){
        int v1 = n / 2;
        int v2 = n - v1;
        vector<int>left(v1), right(v2);
        for(int i = 0; i < v1; i++){
            left[i]=arr[i];
        }
        for(int i = v1; i < n; i++){
            right[i - v1] = arr[i];
        }
        merge_sort(v1, left);
        merge_sort(v2, right);
        int i = 0, j = 0, k = 0;
        while(i < v1 and j < v2){
            if(left[i] < right[j]){
                arr[k] = left[i];
                i++; k++;
            }
            else{
                arr[k] = right[j];
                j++; k++;
            }
        }
        while(i < v1){
            arr[k] = left[i];
            i++; k++;
        }
        while(j < v2){
            arr[k] = right[j];
            j++; k++;
        }
    }
    return arr;
}

int main(){
    cout << "Enter the size of array: ";
    int n; cin >> n;
    cout << "Enter the element of array: ";
    vector<int>arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    cout << "After sorting Merge sort, the array is: ";
    for(auto i: merge_sort(n, arr)){
        cout << i << ' ';
    }
    cout << '\n';
    return 0;
}

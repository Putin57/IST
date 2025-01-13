#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

// Bubble sort part
void bubble(int n, int arr[]){
    for(int i = 0; i < n - 1; i++){
        for(int j = 0; j < n - i - 1; j++){
            if(arr[j] > arr[j + 1]){
                swap(arr[j], arr[j + 1]);
            }
        }
    }
    cout << "The Bubble sort is: ";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << "\n";
}

// selection sort part
void selection(int n, int arr[]){
    for(int i = 0; i < n - 1; i++){
        int mn = i;
        for(int j = i + 1; j < n; j++){
            if(arr[mn] > arr[j]){
                mn = j;
            }
        }
        swap(arr[mn], arr[i]);
    }
    cout << "The Selection sort: ";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << "\n";
}
 
int main(){
    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the element of array: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    clock_t s = clock();
    bubble(n, arr);
    clock_t e = clock();
    cout << "Bubble sort time : " << double((e-s)/CLOCKS_PER_SEC) << "\n";
    clock_t ss = clock();
    selection(n, arr);
    clock_t ee = clock();
    cout << "Selection sort time : " << double((ee-ss)/CLOCKS_PER_SEC) << "\n";
 
}
 

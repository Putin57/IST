#include <bits/stdc++.h>
using namespace std; 

int main(){
    cout << "\nEnter the size of array: ";
    int n; cin >> n;
    cout << "Enter the element of array: ";
    int arr[n + 1];
    for(int i = 0; i < n; i++) cin >> arr[i];
    cout << "\nThe array is : ";
    for(int i = 0; i < n; i++) cout << arr[i] << ' ';
    cout << '\n' << '\n';
    cout << "Array options:\n";
    cout << "1. Insertation\n";
    cout << "2. Deletation\n";
    cout << "3. exit\n\n";
    cout << "Choice your option: ";
    int option; cin >> option;
    if(option == 3){
        cout << "Exit the system...\n";
        exit(true);
    }
    else if(option == 1){
        cout << "\nEnter the index of the array: ";
        int index; cin >> index;
        if(index > n) cout << "\nInvalid...the index is out of range..\n";
        else{
            cout << "\nEnter the new element: ";
            int num; cin >> num;
            index--;
            for(int i = n; i >= index; i--) arr[i + 1] = arr[i];
            arr[index] = num;
            cout << "After the inserting the array : ";
            for(int i = 0; i < n + 1; i++) cout << arr[i] << ' ';
            cout << '\n';
        }
    }
    else{
        cout << "\nEnter the index of array: ";
        int index; cin >> index;
        if(index > n) cout << "\nInvalid... The index is out of range..\n";
        else{
            index--;
            for(int i = index; i < n; i++) arr[i] = arr[i + 1];
            cout << "\nAfter deleting the element, The array is : ";
            for(int i = 0; i < n - 1; i++) cout << arr[i] << ' ';
            cout << '\n';
        }
    }
    return 0;
}
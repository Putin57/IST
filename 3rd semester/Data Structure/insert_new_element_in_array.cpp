// inserting a new element in array (without using any builtin function or STL)

#include <bits/stdc++.h>
using namespace std;

int main(){
    cout << "\nEnter the size of array: ";
    int n;
    cin >> n;
    int arr[n+1];
    cout << "\nEnter the element of array: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    cout << "\nDo you want to insert the new element in array?\n1.YES\n2.Exit\n";
    cout << "\nEnter your answer: ";
    int option;
    cin >> option;
    if(option==1){
        cout << "\nEnter the new element of array: ";
        int nw;
        cin >> nw;
        cout << "\nEnter the new position of array: ";
        int n1;
        cin >> n1;
        if(n1 < 1 and n1 > n){
            cout << "\nYour position is Invalid\n";
            exit(true);
        }
        else{
            n1--;
            for(int i = n; i >= n1; i--){
                arr[i]=arr[i-1];
            }
            arr[n1] = nw;
            cout << "\nAfter inserting the element the new array is : ";
            for(int i = 0; i < n+1; i++){
                cout << arr[i] << ' ';
            }
            cout << "\n\n";
        }
    }
    else{
        exit(true);
        }

        
    return 0;
}

// deleteing an element(position base) from an array..
//[N:B: (without using builtin function or STL)]

#include <bits/stdc++.h>
using namespace std;

int main(){
    cout << "\nEnter the size of array: ";
    int n;
    cin >> n;
    cout << "\nEnter the element of array: ";
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    cout << "\nDo you want to delete any number?\n1.Yes\n2.Exit\n";
    cout<< "\nchoice your answer: ";
    int x;
    cin >> x;
    if(x==2){
        exit(true);
    }
    else{
        cout << "\nwhich position you want to delete?: ";
        int position;
        cin >> position;
        for(int i = position; i < n; i++){
            arr[i-1]=arr[i];
        }
        cout << "\nAfter deleteing element your array is: ";
        n--;
        for(int i = 0; i < n; i++){
            cout << arr[i] << ' ';
        }
        cout << '\n';
        cout << '\n';
    }

    return 0;
}

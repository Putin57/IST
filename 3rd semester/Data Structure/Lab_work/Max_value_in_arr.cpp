// find the max value of an array from user using while loop..

#include <bits/stdc++.h>
using namespace std;

int main(){
    cout << "Enter the size of array : ";
    int n;
    cin >> n;
    cout << "Enter the element of array : ";
    int data[n];
    for(int i = 0; i < n; i++){
        cin >> data[i];
    }
    cout << '\n';

    int k = 0;
    int mx = 0;
    int loc = 0;
    while(k < n){
        if(mx < data[k]){
            mx = data[k];
            loc = k + 1;
        }
        k++;
    }
    cout << "Maximum value is : " << mx << endl;
    cout << "Maximum value index is : " << loc << endl;
    
    return 0;
}

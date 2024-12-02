// string length (without any builtin function or STL)

#include <bits/stdc++.h>
using namespace std;

int main(){
    cout << "Enter the string : ";
    string ch;
    cin >> ch;
    int cnt = 0;
    while(ch[cnt]){
        cnt++;
    }
    cout << "The length of a string: ";
    cout << cnt << '\n';

    return 0;
}

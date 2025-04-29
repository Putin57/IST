#include <bits/stdc++.h>
using namespace std; 
using ll = long long int;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t; cin >> t;
    string s = "abcdefghijklmnopqrstuvwxyz";
    while(t--){
        int n, a, b; cin >> n >> a >> b;
        string ss;
        for(int i = 0; i < b; i++){
            ss += s[i];
        }
        string s3;
        for(int i = 0; i < a; i++){
            s3 += ss;
        }
        string s4;
        for(int i = 0; i < n; i++){
            s4 += s3;
        }
        for(int i = 0; i < n; i++){
            cout << s4[i];
        }
        cout << '\n';
    }
    return 0;
}

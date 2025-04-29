#include <bits/stdc++.h>
using namespace std; 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n, c; cin >> n >> c;
    vector<int>arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int ans1 = 0, ans2 = 0;
    int even = 0, odd = 0;
    for(int i = 0; i < n; i++){
        if(i&1){
            odd+=arr[i];
            if(odd<=c) ans2++;
        }
        else{
            even+=arr[i];
            if(even<=c)ans1++;
        }
    }
    cout << max(ans1, ans2) << '\n';
    return 0;
}

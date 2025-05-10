#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    int n;
    cin >> n;
    string str;
    cin >> str;
    int a = 0, b=0, s = 0;
    for(auto u: str) {
        if(u=='A') a++;
        if(u=='B') b++;
        if(u=='S') s++;
    }
    if(a!=0 and b!=0) cout << 1 << endl;
    else if(a!=0) cout << a << endl;
    else if(b!=0) cout << b << endl;
    else cout << 2 << endl;

}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    for(int i=1; i<=t; i++) {
        //cout << "Case " << i << ": ";
        solve();
    }
}

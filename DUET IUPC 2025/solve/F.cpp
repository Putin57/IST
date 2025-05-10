#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"

void solve() {
    int r, c;
    cin >> r >> c;

    int ans = min(r, c) + min(min(r, c), (max(r, c)-min(r, c)));
    cout << ans << endl;
    int a[r+1][c+1];
    for(int i=1; i<=r; i++) {
        for(int j=1; j<=c; j++) {
            a[i][j]=0;
        }
    }

    for(int i=1; i<=min(r, c); i++) {
        int val = 1;
        for(int j=1; j<=r; j++) {
            a[j][i] = val;
            if(val<(r-i)+1) val++;
        }
    }

    for(int i=1; i<=r; i++) {
        for(int j=1; j<=c; j++) {
            if(a[i][j]==0) a[i][j] = j;
        }
    }

    for(int i=1; i<=r; i++) {
        for(int j=1; j<=c; j++) {
            cout << a[i][j] << ' ';
        }
        cout << endl;
    }
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

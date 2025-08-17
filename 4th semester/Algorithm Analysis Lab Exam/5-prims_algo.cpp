#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m; cin >> n >> m;
    vector<vector<pair<int,int>>> adj(n);
    for(int i=0;i<m;i++){
        int u,v,w; cin>>u>>v>>w;
        adj[u].push_back({v,w}); adj[v].push_back({u,w});
    }

    vector<int> key(n, INT_MAX); vector<bool> inMST(n,false);
    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<>> pq;
    key[0]=0; pq.push({0,0});
    int cost=0;

    while(!pq.empty()){
        auto [k,u]=pq.top(); pq.pop();
        if(inMST[u]) continue;
        inMST[u]=true; cost+=k;
        for(auto [v,w]:adj[u])
            if(!inMST[v] && w<key[v]) key[v]=w, pq.push({w,v});
    }

    cout<<"Minimum Cost of Spanning Tree: "<<cost<<"\n";
}
/*
input:
5 7
0 1 2
0 3 6
1 2 3
1 3 8
1 4 5
2 4 7
3 4 9


output:
Minimum Cost of Spanning Tree: 16

time complexity: O(E log V)
space Complexity: O(E+V)


*/

#include <bits/stdc++.h>
using namespace std;

const int INF = 1e9;

int main() {
    int n, m; cin >> n >> m;
    vector<vector<pair<int,int>>> adj(n);
    for(int i=0;i<m;i++){
        int u,v,w; cin>>u>>v>>w;
        adj[u].push_back({v,w}); // directed graph
        // adj[v].push_back({u,w}); // uncomment for undirected
    }
    int src; cin>>src;
    vector<int> dist(n,INF); dist[src]=0;
    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<>> pq;
    pq.push({0,src});
    while(!pq.empty()){
        auto [d,u]=pq.top(); pq.pop();
        if(d>dist[u]) continue;
        for(auto [v,w]:adj[u])
            if(dist[u]+w<dist[v]){
                dist[v]=dist[u]+w;
                pq.push({dist[v],v});
            }
    }
    for(int i=0;i<n;i++) cout << "Vertex " << i << ": " << (dist[i]==INF?-1:dist[i]) << "\n";
}



/*
input:
5 6
0 1 2
0 2 4
1 2 1
1 3 7
2 4 3
3 4 1
0
output:
Vertex 0: 0
Vertex 1: 2
Vertex 2: 3
Vertex 3: 9
Vertex 4: 6

*/

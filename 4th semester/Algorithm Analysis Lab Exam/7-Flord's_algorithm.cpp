#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m; cin >> n >> m;
    const int INF = 1e9;
    vector<vector<int>> dist(n, vector<int>(n, INF));
    for(int i=0;i<n;i++) dist[i][i]=0;

    for(int i=0;i<m;i++){
        int u,v,w; cin>>u>>v>>w;
        dist[u][v]=w; // directed graph
        // dist[v][u]=w; // uncomment for undirected
    }

    for(int k=0;k<n;k++)
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
                dist[i][j]=min(dist[i][j], dist[i][k]+dist[k][j]);

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)
            cout<<(dist[i][j]==INF?"INF":to_string(dist[i][j]))<<" ";
        cout<<"\n";
    }
}

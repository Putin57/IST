#include <bits/stdc++.h>
using namespace std; 
 
vector<int>bfs(vector<int>graph[],int start, int n){
    int vis[n+1] ={0};
    queue<int>q;
    vector<int>bfsGraph;
    vis[start]=1;
    bfsGraph.push_back(start);
    q.push(start);
    while(q.size()){
        int node = q. front();
        q.pop();
        for(int x:graph[node]){
            if(!vis[x]){
                vis[x]++;
                q.push(x);
                bfsGraph.push_back(x);
            }
        }
    }
    return bfsGraph;
}
 
int main(){
     int n, m; cin >> n >> m;
     vector<int>graph[n+1];
     for(int i = 0; i < m; i++){
        int x, y; cin >> x >> y;
        graph[x].push_back(y);
        graph[y].push_back(x);
     }
     vector<int>ans = bfs(graph,1,n);
     for(int i:ans){
        cout << i << ' ';
     }
     cout << '\n';
 
    return 0;
}   

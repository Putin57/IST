// graph represent

#include <bits/stdc++.h>
using namespace std; 
int main(){
    int node, edge; cin >> node >> edge;
    vector<int>graph[node + 1];
    for(int i = 0; i < edge; i++){
        int x, y; cin >> x >> y;
        graph[x].push_back(y);
        graph[y].push_back(x);
    }
    for(int i = 1; i <= node; i++){
        cout << i << "<--> ";
        for(int j: graph[i]){
            cout << j << ' ';
        }
        cout << '\n';
    }
    return 0;
}

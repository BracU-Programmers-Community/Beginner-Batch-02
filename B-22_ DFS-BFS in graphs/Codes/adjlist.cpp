#include <bits/stdc++.h>
using namespace std;

/// Adjacency list

/// V list/vector

const int nmax = 1e5+10;

vector<int> adj[nmax];  /// adj[1] = list of 1
/// adj[2] = list of 2

int main(){
    int nodes, edges;
    cin>>nodes>>edges;

    for(int i = 0; i<edges; i++){
        int u, v;
        cin>>u>>v;

        /// undirected graph
//        adj[u].push_back(v);
//        adj[v].push_back(u);

        /// directed graph
        adj[u].push_back(v);
    }

    for(int u = 1; u<=nodes; u++){
        cout<<u<<" - ";
        for(int v : adj[u]){
            cout<<v<<" ";
        }
        cout<<endl;
    }
}



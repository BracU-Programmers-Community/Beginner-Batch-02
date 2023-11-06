#include <bits/stdc++.h>
using namespace std;

/// Adjacency list

/// V list/vector

const int nmax = 1e5+10;

vector<int> adj[nmax];  /// adj[1] = list of 1
/// adj[2] = list of 2

bool visited[nmax];

void dfs(int u){
    visited[u] = true;

    for(int v : adj[u]){
        if(visited[v]) continue;

        cout<<" going to "<<v<<" from "<<u<<endl;
        dfs(v);


    }

}

int main(){
    int nodes, edges;
    cin>>nodes>>edges;

    for(int i = 0; i<edges; i++){
        int u, v;
        cin>>u>>v;

        /// undirected graph
        adj[u].push_back(v);
        adj[v].push_back(u);

        /// directed graph
//        adj[u].push_back(v);
    }

    for(int u = 1; u<=nodes; u++){
        if(visited[u])
            continue;
        dfs(u);
    }
}




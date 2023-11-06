#include <bits/stdc++.h>
using namespace std;

/// Adjacency matrix

/// V * V matrix

const int nmax = 5000+10;

bool adj[nmax][nmax];       /// all false

int main(){
    int nodes, edges;
    cin>>nodes>>edges;

    for(int i = 0; i<edges; i++){
        int u, v;
        cin>>u>>v;

        /// undirected graph
        adj[u][v] = true;
        adj[v][u] = true;

        /// directed graph
        adj[u][v] = true;
    }

    for(int u = 1; u<=nodes; u++){
        cout<<u<<" - ";
        for(int v = 1; v<=nodes; v++){
            if(adj[u][v])
                cout<<v<<" ";
        }
        cout<<endl;
    }
}


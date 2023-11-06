#include <bits/stdc++.h>
using namespace std;

/// Adjacency list

/// V list/vector

const int nmax = 1e5+10;

vector<int> adj[nmax];  /// adj[1] = list of 1
/// adj[2] = list of 2

bool visited[nmax];
int dist[nmax];
int nodes;

void bfs(int u){
    for(int i = 0; i<=nodes; i++)
        dist[i] = 1e9;

    queue<int> q;
    visited[u] = true;
    q.push(u);
    dist[u] = 0;

    while(!q.empty()){
        int v = q.front();
        q.pop();


        for(int w : adj[v]){
            if(visited[w])
                continue;

            visited[w] = true;
            q.push(w);
            dist[w] = dist[v] + 1;
        }
    }
}


int main(){
    int  edges;
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
//
//    for(int u = 1; u<=nodes; u++){
//        if(visited[u])
//            continue;
//        bfs(u);
//    }

    bfs(1);

    for(int i = 1; i<=nodes; i++)
        cout<<i<<" -> "<<dist[i]<<endl;

    int target = 3;
    vector<int> path;
    path.push_back(target);

    while(true){
        int nexttarget;
        for(int x: adj[target]){
            if(dist[x] == dist[target]-1){
                nexttarget = x;
            }
        }

        path.push_back(nexttarget);

        if(nexttarget == 1)
            break;

        target = nexttarget;
    }

    for(int  x : path)
        cout<<x<<endl;
}





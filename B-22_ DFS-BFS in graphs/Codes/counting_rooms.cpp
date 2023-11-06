#include <bits/stdc++.h>
using namespace std;

/// graph implicit

const int nmax = 1e3+10;

char grid[nmax][nmax];

bool visited[nmax][nmax];
int n, m;

void dfs(int x, int y){
    visited[x][y] = true;

    if(x > 0 && grid[x-1][y] != '#' && !visited[x-1][y])
        dfs(x-1, y);

    if(x < n-1 && grid[x+1][y] != '#' &&!visited[x+1][y])
        dfs(x+1, y);

    if(y > 0 && grid[x][y-1] != '#' &&!visited[x][y-1])
        dfs(x, y-1);

    if(y < m-1 && grid[x][y+1] != '#' &&!visited[x][y+1])
        dfs(x, y+1);

}

int main(){


    cin>>n>>m;

    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++){
            cin>>grid[i][j];
        }
    }

    int ans = 0;

    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++){
            if(grid[i][j] != '#' && !visited[i][j]){
                dfs(i, j);
                ans++;
            }
        }
    }

    cout<<ans<<endl;
}




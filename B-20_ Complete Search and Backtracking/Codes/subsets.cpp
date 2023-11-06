#include <bits/stdc++.h>
using namespace std;

vector<int> st;
set<pair<int, int>> incompatible;
int cnt = 0;

void rec(int pos, int n, int s){

    if(pos == n){

        if(st.size() == s) return;

        for(int x: st){
            cout<<x<<" ";
        }
        cout<<endl;
        return;
    }

    /// a will not be in the set
    rec(pos+1, n, s);

    /// a will be in the set
    if(st.size() == s) return;

    for(int x : st){
        if(incompatible.count({x, pos}) > 0)
            return;
    }

    st.push_back(pos);
    rec(pos+1, n, s);
    st.pop_back();
}


/// O(2^n)    n at most 20-22



int main(){
    int n;
    cin>>n;

    int k;
    cin>>k;

    for(int i = 0; i<k; i++){
        int u, v;
        cin>>u>>v;
        incompatible.insert({u, v});
        incompatible.insert({v, u});
    }

    rec(0, n, 7);

    cout<<cnt<<endl;
}

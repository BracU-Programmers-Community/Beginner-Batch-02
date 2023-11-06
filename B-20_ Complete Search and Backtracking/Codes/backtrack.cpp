#include <bits/stdc++.h>
using namespace std;

vector<int> perm;
int cnt = 0;

void rec(int pos, int n){
    if(pos == n){

//        for(int x: perm){
//            cout<<x<<" ";
//        }
//        cout<<endl;

        cnt++;
        return;
    }


    for(int i = 0; i<n; i++){
        if(i == pos) continue;

        bool possible = true;
        for(int x : perm){
            if(x == i)
                possible = false;
        }

        if(!possible)
            continue;

        perm.push_back(i);
        rec(pos+1, n);
        perm.pop_back();
    }
}


int main(){
    int n;
    cin>>n ;

    vector<int> input(n);

    for(int i = 0; i<n; i++){
        input[i] = i;
    }


    rec(0, n);

    cout<<cnt<<endl;


}



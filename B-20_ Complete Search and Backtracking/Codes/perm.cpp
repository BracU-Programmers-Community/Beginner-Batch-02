#include <bits/stdc++.h>
using namespace std;





int main(){
    int n;
    cin>>n ;

    vector<int> input(n);

    for(int i = 0; i<n; i++){
        cin>>input[i];
    }

    sort(input.begin(), input.end());

    do{
        for(int x : input){
            cout<<x<<" ";
        }
        cout<<endl;
    }while(next_permutation(input.begin(), input.end()));
}


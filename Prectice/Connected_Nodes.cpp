#include<bits/stdc++.h>

using namespace std;


int main(){

    int n, e;
    cin>>n>>e;
    vector<int> v[n];

    while(e--){
        int a, b;
        cin>>a>>b;

        v[a].push_back(b);
        v[b].push_back(a);
    }

    int q;
    cin>>q;

    while(q--){

        int a;
        cin>>a;

        if(!v[a].empty()){
            sort(v[a].begin(), v[a].end(), greater<int>());

            for(int x: v[a]){
                cout<<x<<" ";
            }
        }
        else
            cout<<"-1";
            
        cout<<endl;
    }


    return 0;
}
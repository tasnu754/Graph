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
    }

    int q;
    cin>>q;

    while(q--){
        int a, b, fnd = 0;
        cin>>a>>b;

        if(a == b){
            cout<<"YES"<<endl;
            continue;
        }

        for(int x: v[a]){
            if(x == b){
                fnd = 1;
                break;
            }

        }

        if(fnd)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }


    return 0;
}
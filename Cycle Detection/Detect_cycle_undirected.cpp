#include<bits/stdc++.h>

using namespace std;
vector<int> adj[1000];
bool vis[1000] = {false};
int par[1000] = {-1};
bool ans = 0;

void dfs(int src){

    vis[src] = true;

    for(int child: adj[src]){

        if(vis[child] && par[src]!=child){
            ans = 1;
        }
        else{
            par[child] = src;
            dfs(child); 
        }
    }
}

int main(){

    int n, e;
    cin>>n>>e;

    while(e--){
        int a, b;
        cin>>a>>b;

        adj[a].push_back(b);
        adj[b].push_back(a);

    }

    dfs(0);

    if(ans)
        cout<<"Cycle Detected";
    else
        cout<<"NO cycle Detected";


    return 0;
}



    
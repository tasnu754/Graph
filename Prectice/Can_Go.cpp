#include<bits/stdc++.h>

using namespace std;

int row, col;
char build[1001][1001];
bool vis[1001][1001];
vector<pair<int,int>> trav = {{0,1},{0,-1},{-1,0},{1,0}};

bool val(int i, int j){
    if(i<0 || i>=row || j<0 || j>=col)
        return false;
    
    return true;
}

void dfs(int row, int col){
    vis[row][col] = true;

    for(int i=0; i<4; i++){
        int si = row + trav[i].first;
        int sj = col + trav[i].second;

        if(val(si, sj) && !vis[si][sj] && (build[si][sj]=='.' || build[si][sj]=='B')){
            dfs(si, sj);
        }

    }


}

int main(){

    int arow, acol, brow, bcol;
    cin>>row>>col;

    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cin>>build[i][j];
            if(build[i][j]=='A'){
                arow = i;
                acol = j;
            }
            else if(build[i][j]=='B'){
                brow = i;
                bcol = j;
            }
        }
    }

    memset(vis, false, sizeof(vis));

    dfs(arow, acol);

    if(vis[brow][bcol])
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;


    return 0;
}
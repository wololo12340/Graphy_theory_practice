#include <bits/stdc++.h>
using namespace std;
int n, m;
 vector<vector<int>> adj;
int main(){
    cin>>n>>m;
    adj.assign(n+1, {});
    for(int i=0; i<n; ++i){
        int x,y;
        cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
}
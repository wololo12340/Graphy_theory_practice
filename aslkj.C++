#include <bits/stdc++.h>
using namespace std;
int n, m;
 vector<vector<int>> points;
int main(){
    cin>>n>>m;
    points.assign(n+1, {});
    for(int i=0; i<n; ++i){
        int x,y;
        cin>>x>>y;
        points[x].push_back(y);
        points[y].push_back(x);
    }
}
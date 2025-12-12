#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;

void solve() {
    ll n,m; cin>>n>>m;
    vector<vector<int>>G(m+1);
    ll zerres=0;
    vector<int> visited(m+1,-1);
    for(int i=0;i<n;i++){
        ll x; cin>>x;
        if(x==0) {
            zerres++;
            continue;
        }
        vector<int> temp;
        for(int i=0; i<x; i++){
            ll y; cin>>y;
            visited[y]=0;
            temp.push_back(y);
        }
        for(int i=0; i<temp.size(); i++){
            for(int j=i+1; j<temp.size(); j++){
                G[temp[i]].push_back(temp[j]);
                G[temp[j]].push_back(temp[i]);
            }
        }
    }
    ll res=-1;
    
    function<void(int)> dfs=[&](int node){
        visited[node]=1;
        for(auto child:G[node]){
            if(visited[child]==0){
                dfs(child);
            }
        }
    };
    for(int i=1;i<=m;i++){
        if(visited[i]==0){
            res++;
            dfs(i);
        }
    }
    if (res==-1) res=0;
    cout<<res+zerres<<endl;
    
    









}













int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int T = 1;
    // cin >> T;
    while (T--) {
        
        solve();
    }
    return 0;
}
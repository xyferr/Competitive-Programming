#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;

void solve() {
    ll n,m; cin>>n>>m;
    vector<vector<int>>G(n+1);
    
    vector<int> visited(n+1,0);
    for(int i=0;i<m;i++){
        ll x; cin>>x;
        
        vector<int> temp;
        for(int j=0; j<x; j++){
            ll y; cin>>y;
            temp.push_back(y);
        }
        for(int j=1; j<x; j++){
            G[temp[0]].push_back(temp[j]);
            G[temp[j]].push_back(temp[0]);
        }
    }
    
    vector<int> dp(n+1,0);
    
    function<void(int,vector<int>&)> dfs=[&](int node , vector<int> &cur){
        visited[node]=1;
        cur.push_back(node);
        for(auto child:G[node]){
            if(visited[child]==0){
                dfs(child,cur);
            }
        }
    };

    
    for(int i=1; i<=n; i++){
        if(visited[i]==0){
            vector<int> cur;
            dfs(i,cur);
            for(auto x:cur){
                dp[x]=cur.size();
            }
        }
    }
    for(int i=1;i<=n;i++){
        cout<<dp[i]<<" ";
    }









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
#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;

void solve() {
    ll n; cin >> n;
    vector<vector<ll>> G(n+1);

    for (ll i = 0; i < n-1; ++i){
        ll u,v; cin>>u>>v;
        G[u].push_back(v);
        G[v].push_back(u);
    }
    vector<ll> ccnt(n+1,1);
    vector<ll> dp(n+1,0);

    function<void(ll,ll)>dfs = [&](ll cur, ll par){
        int s=0;
        for(auto &child: G[cur]){
            if(child==par) continue;
            dfs(child,cur);
            s+=dp[child];
            ccnt[cur]+=ccnt[child];
        }
        for(auto &child: G[cur]){
            if(child==par) continue;
            dp[cur]=max(dp[cur],s-dp[child]+ccnt[child]-1);
        }
    };

    dfs(1,-1);
    cout<<dp[1]<<endl;

    









}













int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int T = 1;
    cin >> T;
    while (T--) {
        
        solve();
    }
    return 0;
}
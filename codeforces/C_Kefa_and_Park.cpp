#include<bits/stdc++.h>
#define ll long long
#define endl "\n"   
using namespace std;


vector<vector<ll>> g;
ll ans = 0;
vector<ll> d;
ll n,m;
void dfs(ll v , ll cat=0, ll par =-1){
    if(d[v] == 1) {
        cat++;
    } else {
        cat = 0;
    }
    
    if(cat>m) return;

    ll child = 0;
    for(auto u : g[v]) {
        if(u != par) {
            // cerr<< "Visiting: " << u << " from " << v << endl;
            child++;
            dfs(u, cat, v);
        }
    }
    if(child == 0) {
        ans++;
    }
}

void solve() {
    cin >> n >> m;
    g.resize(n + 1);
    d.resize(n + 1);
    for(ll i = 1; i <= n; i++) cin >> d[i];
    for(ll i = 1; i <= n-1; i++) {
        ll u, v; cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }

    dfs(1);

    cout<<ans<<endl;
    




}






int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int T = 1; 
    // cin >> T;
    while(T--) {
        solve();
    }
    return 0;
}


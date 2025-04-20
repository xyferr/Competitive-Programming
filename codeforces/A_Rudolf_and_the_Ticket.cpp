#include<bits/stdc++.h>
#define ll long long
using namespace std;




void solve() {
    ll n,m,k; cin>>n>>m>>k;
    vector<ll> b(n) , c(m);
    for(ll i=0; i<n; i++) cin>>b[i];
    for(ll i=0; i<m; i++) cin>>c[i];

    ll res=0;
    sort(b.begin(), b.end());
    sort(c.begin(), c.end());

    for(ll i=0; i<n; i++){
        for(ll j=0; j<m; j++){
            if(b[i]+c[j]<=k) res++;
            else break;
        }
    }
    cout<<res<<'\n';




}






int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int T = 1; cin >> T;
    while(T--) {
        solve();
    }
    return 0;
}


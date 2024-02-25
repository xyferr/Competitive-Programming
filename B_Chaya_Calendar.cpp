#include<bits/stdc++.h>
#define ll long long
using namespace std;




void solve() {
    ll n; cin>>n;
    vector<ll> v(n);
    for(ll i=0; i<n; i++) cin>>v[i];

    ll ans=v[0];
    ans++;

    for(ll i=1; i<n; i++){
        ll cur=v[i];
        while(cur<ans) cur+=v[i];
        cur++;
        ans=cur;
        // cout<<ans<<"-";
    }
    --ans;
    cout<<ans<<'\n';;



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


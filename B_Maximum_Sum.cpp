#include<bits/stdc++.h>
#define ll long long
using namespace std;




void solve() {
    ll n,k; cin>>n>>k;
    vector<ll> v(n);
    for(ll i=0; i<n; i++) cin>>v[i];

    sort(v.begin(),v.end());
    vector<ll> pref(n+1);
    for(ll i=0; i<n; i++){
        pref[i+1]=pref[i]+v[i];
    }

    ll ans = 0;
    for(ll i=0; i<=k; i++){
        ans = max(ans , pref[n-k+i]-pref[2*i]);
    }
    
    cout<<ans<<'\n';





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


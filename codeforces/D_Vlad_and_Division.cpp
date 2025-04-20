#include<bits/stdc++.h>
#define ll long long
using namespace std;




void solve() {
    ll n; cin>>n;
    vector<ll> v(n);
    for(ll i=0; i<n; i++) cin>>v[i];

    map<ll , ll> mp;
    ll ans=0;
    for(ll i=0; i<n; i++){
        ll x = v[i];
        ll pair_x = ((1<<31)-1)^x;
        if(mp[x]==0){
            ans++;
            mp[pair_x]++;
        }
        else{
            mp[x]--;
        }
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


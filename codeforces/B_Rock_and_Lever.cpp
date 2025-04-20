#include<bits/stdc++.h>
#define ll long long
using namespace std;


ll most_significant_bit(ll n){
    int msb = 0;
    while( n > 0){
        msb++;
        n = n>>1;
    }
    return msb;
}

ll nCr(ll n, ll r){
    if(r>n) return 0;
    if(r==0) return 1;
    if(r==1) return n;
    return nCr(n-1, r-1) + nCr(n-1, r);
}

void solve() {
    ll n; cin>>n;
    vector<ll> v(n);
    for(ll i=0; i<n; i++) cin>>v[i];

    map<ll,ll> mp;
    
    for(ll i=0; i<n; i++){
        mp[most_significant_bit(v[i])]++;
        // max_ans = max(max_ans, mp[most_significant_bit(v[i])]);
    }
    
    ll ans = 0;
    for(auto it: mp){
        if(it.second>1){
            ans += nCr(it.second, 2);
        }
    }

    cout<<ans<<endl;
    





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


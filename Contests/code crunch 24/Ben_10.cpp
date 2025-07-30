#include<bits/stdc++.h>
#define ll long long
using namespace std;




void solve() {
    ll n; cin>>n;
    vector<ll> v(n);
    for(ll i=0; i<n; i++) cin>>v[i];
    vector<ll> prefix(n+1,0);

    for(ll i=1; i<=n; i++){
        prefix[i]=prefix[i-1]+v[i-1];
    }
    ll res = 0;
    unordered_map<ll,ll> mp;
    for(ll i=0; i<=n; i++){
        mp[prefix[i]]=i;
    }
    for(ll i=0; i<=n; i++){
        if(mp.find(prefix[i])!=mp.end()){
            res=max(res,mp[prefix[i]]-i);
        }
    }
    cout<<res<<endl;





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


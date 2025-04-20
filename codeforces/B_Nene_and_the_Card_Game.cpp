#include<bits/stdc++.h>
#define ll long long
using namespace std;




void solve() {
    ll n; cin>>n;
    unordered_map<ll,ll> mp;
    for(ll i=0; i<n; i++) {
        ll x; cin>>x;
        mp[x]++;
    }
    ll count=0;
    for(auto it: mp){
        if(it.second==2) count++;
    }

    cout<<count<<endl;




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


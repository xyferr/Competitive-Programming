#include<bits/stdc++.h>
#define ll long long
using namespace std;




void solve() {
    ll n; cin>>n;
    vector<ll> v(n);
    for(ll i=0; i<n; i++) cin>>v[i];
    unordered_map<ll,ll>mp;
    ll count=0;
    for(ll i=n-1; i>=0; i--){
        count+=mp[v[i]-(i+1)];
        mp[v[i]-(i+1)]++;
    }
    cout<<count<<'\n';



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


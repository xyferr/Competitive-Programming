#include<bits/stdc++.h>
#define ll long long
using namespace std;




void solve() {
    ll n; cin>>n;
    unordered_map<ll, ll> mp;
    for(ll i=0; i<n; i++){
        ll x; cin>>x;
        mp[x]++; // counting the frequency of each element
    }
    ll max_count = INT_MIN;

    for(auto it: mp){
        max_count = max(max_count, it.second); // finding the maximum frequency of an element
    }
    ll ans = n-max_count;
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


#include<bits/stdc++.h>
#define ll long long
using namespace std;




void solve() {
    ll n; cin>>n;
    map<ll,ll> mp;
    for(int i=0; i<n; i++){
        ll x; cin>>x;
        mp[x]++;
    }
    ll ans=0;

    for(auto it: mp){
        ans += it.second/3;
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


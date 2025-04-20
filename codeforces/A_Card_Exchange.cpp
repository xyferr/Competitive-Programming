#include<bits/stdc++.h>
#define ll long long
using namespace std;




void solve() {
    ll n,k; cin>>n>>k;
    vector<ll> v(n);
    unordered_map<ll,ll> mp;
    for(ll i=0; i<n; i++) {
        cin>>v[i];
        mp[v[i]]++;
    }
    if(n==1){
        cout<<1<<'\n';
        return;
    }

    for(auto it: mp){
        if(it.second>=k){
            cout<<k-1<<'\n';
            return;
        }
    }
    cout<<n<<'\n';




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


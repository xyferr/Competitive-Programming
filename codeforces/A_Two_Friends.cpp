#include<bits/stdc++.h>
#define ll long long
using namespace std;




void solve() {
    ll n; cin>>n;
    vector<ll> v(n);
    for(ll i=0; i<n; i++) cin>>v[i];

    unordered_map<ll,ll> m;
    for(ll i=0; i<n; i++){
        m[v[i]]=i+1;
    }

    for(auto it: m){
        if(m[it.second]==it.first){
            cout<<2<<endl;
            return;
        }
    }
    cout<<3<<endl;



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


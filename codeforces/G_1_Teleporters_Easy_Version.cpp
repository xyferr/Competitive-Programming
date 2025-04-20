#include<bits/stdc++.h>
#define ll long long
using namespace std;




void solve() {
    ll n,c; cin>>n>>c;
    vector<ll> v(n);
    for(ll i=0; i<n; i++){
        cin>>v[i];
        v[i]+=i+1;
    }
    sort(v.begin(), v.end());
    ll res = 0;
    ll cur =0;
    for(ll i=0; i<n; i++){
        cur+=v[i];

        if(cur>c) break;
        res++;
    }
    cout<<res<<'\n';






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


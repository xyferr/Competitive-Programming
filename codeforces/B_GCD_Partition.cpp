#include<bits/stdc++.h>
#define ll long long
using namespace std;



void solve() {
    ll n; cin>>n;
    vector<ll> v(n);
    for(ll i=0; i<n; i++) cin>>v[i];

    vector<ll> pf(n);
    for(ll i=0; i<n; i++){
        if(i==0) pf[i]=v[i];
        else pf[i] = v[i] + pf[i-1];
    }

    // for(auto it: pf) cout<<it<<" ";
    // cout<<endl;
    ll max_gcd = 1;
    for(ll i=0; i<n-1; i++){
        ll cur_gcd = gcd(pf[i],pf[n-1]-pf[i]);
        max_gcd = max(max_gcd , cur_gcd);
    }

    cout<<max_gcd<<'\n';



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


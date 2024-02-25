#include<bits/stdc++.h>
#define ll long long
using namespace std;




void solve() {
    ll n; cin>>n;
    vector<ll> v(n);
    for(ll i=0; i<n; i++) cin>>v[i];
    ll dig =1;
    for(ll i=n-1; i>=0; i--){
        dig+=pow(10,i);
    }
    cout<<dig<<'\n';
    ll rem = n/10;
    ll ans = 2*rem + (n-rem);
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


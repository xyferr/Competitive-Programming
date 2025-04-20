#include<bits/stdc++.h>
#define ll long long
using namespace std;




void solve() {
    ll n,x; cin>>n>>x;
    vector<ll> v(n);
    ll req = 0;
    for(ll it =0 ; it<3; it++){
        for(ll i=0; i<n; i++) cin>>v[i];

        for(ll i=0; i<n; i++){
            if((x|v[i])==x) req|=v[i];
            else break;
        }
    }

    cout<<(req==x?"Yes\n":"No\n");
    




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


#include<bits/stdc++.h>
#define ll long long
using namespace std;

// const int N = 1e9+1;


void solve() {
    ll n,m; cin>>n>>m;

    // vector<ll> v(N);
    // for(ll i=0; i<=N; i++) {
    //     v[i] = i;
    // }
    ll ans = n;
    for(ll i=n; i<=n+m; ++i){
        ans|=i;
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


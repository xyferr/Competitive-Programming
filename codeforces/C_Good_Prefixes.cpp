#include<bits/stdc++.h>
#define ll long long
#define endl "\n"
#define debug(x) cerr << #x << " = " << x << endl
#define debug2(x, y) cerr << #x << " = " << x << ", " << #y << " = " << y << endl

using namespace std;





void solve() {
    ll n; cin>>n;
    vector<ll> v(n);
    for(ll i=0; i<n; i++) cin>>v[i];

    ll ans=0;
    vector<ll> pf(n,0);
    pf[0] = v[0];
    for(ll i=1; i<n; i++) {
        pf[i] = pf[i-1] + v[i];
    }
    ll maxm = v[0];
    for(ll i=0; i<n; i++){
        maxm = max(v[i],maxm);
        // debug2(pf[i],maxm);
        if((pf[i]-maxm)==maxm){
            ans++;
        }
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


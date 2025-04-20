#include<bits/stdc++.h>
#define ll long long
using namespace std;


const ll mod = 1e9+7;

void solve() {
    ll n; cin>>n;
    vector<ll> a(n) , b(n);
    for(ll i=0; i<n; i++) cin>>a[i];
    for(ll i=0; i<n; i++) cin>>b[i];
    sort(a.begin(),a.end());
    sort(b.rbegin(), b.rend());
    vector<ll> dp(n,1);
    
    for(ll i=0; i<n; i++){
        ll count = a.size() - (upper_bound(a.begin(),a.end(),b[i]) - a.begin());
        dp[i] = max(0LL, count -i)%mod;
    }

    ll res=1;
    for(ll i=0; i<n; i++){
        res = (res*dp[i])%mod;
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


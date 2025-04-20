#include<bits/stdc++.h>
#define ll long long
using namespace std;




void solve() {
    ll n; cin>>n;
    vector<ll> v(n);
    for(ll i=0; i<n; i++) cin>>v[i];
    vector<int> dp(n, 0);
    dp[n-1]=v[n-1];
    for(int i=n-2; i>=0; i--) {
        dp[i]=max(v[i], ((dp[i+1]-v[i])+v[i]+1));
    }
    cout<<dp[0]<<endl;




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


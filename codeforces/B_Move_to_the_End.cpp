#include<bits/stdc++.h>
#define ll long long
#define endl "\n"   
using namespace std;




void solve() {
    ll n; cin>>n;
    vector<ll> v(n);
    for(ll i=0; i<n; i++) cin>>v[i];

    vector<ll> dp(n,0);
    dp[0] = v[0];
    for(int i = 1; i < n; i++)
    dp[i] = max(dp[i-1], v[i]);

    // for(auto it: dp){
    //     cerr<<it<<" ";
    // }
    // cerr<<endl;
    vector<ll> pref_v(n,0);
    pref_v[0] = v[0];
    for(ll i=1; i<n; i++){
        pref_v[i] = pref_v[i-1]+v[i];
    }
    ll k=1;
    for(ll i=n-1; i>=0; i--){
        ll cur = dp[i];
        if(k!=1){
            cur+= pref_v[n-1]-pref_v[i];;
        }
        k++;
        cout<<cur<<" ";
        
    }
    cout<<endl;





}






int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int T = 1; 
    cin >> T;
    while(T--) {
        solve();
    }
    return 0;
}







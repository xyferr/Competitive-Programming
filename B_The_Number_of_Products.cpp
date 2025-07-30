#include<bits/stdc++.h>
#define ll long long
#define endl "\n"   
using namespace std;




void solve() {
    ll n; cin>>n;
    vector<ll> v(n);
    for(ll i=0; i<n; i++) cin>>v[i];

    vector<pair<ll,ll>> dp(n, {0, 0});
    if(v[0]<0){
        dp[0].first = 1;
    } else {
        dp[0].second = 1;
    }
    for(ll i=1; i<n; i++) {
        if(v[i]<0) {
            
            dp[i].second = dp[i-1].first;
            dp[i].first = dp[i-1].second;
            dp[i].first++;


            
        } else {
            
            dp[i].second = dp[i-1].second;
            dp[i].first = dp[i-1].first;
            dp[i].second++;
            
        }
    }

    ll neg = 0, pos = 0;
    for(ll i=0; i<n; i++) {
        neg += dp[i].first;
        pos += dp[i].second;
    }
    cout<<neg<<" "<<pos<<endl;

    // for(ll i=0; i<n; i++) {
    //     cerr<<dp[i].first<<"-"<<dp[i].second<<" ";
    // }
    // cerr<<endl;


    


}






int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int T = 1; 
    // cin >> T;
    while(T--) {
        solve();
    }
    return 0;
}


#include<bits/stdc++.h>
#define ll long long
#define endl '\n'

using namespace std;
void prv(vector<ll>&vec);




void solve() {
    string s; cin>>s;
    ll n = s.size();
    vector<ll> dp(n+1);
    for(ll i=0; i+1<n; i++){
        if(s[i]==s[i+1]){
            if(i==0) dp[i+1]=1;
            else dp[i+1]=dp[i]+1;
        }
        else
        dp[i+1]=dp[i];
    }
    dp[n]=dp[n-1];
    //prv(dp);
    ll m; cin>>m;
    vector<pair<ll,ll>> v(m);
    for(ll i=0; i<m; i++) cin>>v[i].first>>v[i].second;
    
    for(ll i = 0 ; i<m; i++){
        ll ans= dp[v[i].second-1]-dp[v[i].first-1];
        cout<<ans<<endl;
    }

    




}





















int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int T = 1; //cin >> T;
    while(T--) {
        solve();
    }
    return 0;
}

void prv(vector<ll>&vec){
    for(auto it: vec){
        cout<<it<<" ";
    }
    cout<<endl;
}
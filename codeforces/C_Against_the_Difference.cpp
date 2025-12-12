#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;

void solve() {
    ll n; cin >> n;
    vector<ll> v(n+1);
    for (ll i = 1; i <=n; ++i) cin >> v[i];
    deque<ll> q[n+1];
    vector<ll>dp(n+1,0);
    
    for(int i=1; i<=n; i++){
        dp[i]=dp[i-1];
        q[v[i]].emplace_back(i);
        if(q[v[i]].size()>v[i]){
            q[v[i]].pop_front();

        }
        if(q[v[i]].size()==v[i]){
            dp[i]=max(dp[i],dp[q[v[i]].front()-1]+v[i]);
        }
    }
    cout<<*max_element(dp.begin(),dp.end())<<endl;




}










int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int T = 1;
    cin >> T;
    while (T--) {
        
        solve();
    }
    return 0;
}
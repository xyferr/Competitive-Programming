#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
    ll n; cin>>n;
    vector<ll> v(n);
    for(ll i=0; i<n; i++) cin>>v[i];
    vector<int> dp(n, 1);
    for(ll i=1; i<n; i++) {
        if(v[i]<=2*v[i-1]) {
            dp[i]=dp[i-1]+1;
            if(dp[i-1]==0) dp[i]++;
        }
        
        else{
            dp[i]=0;
        }
    }

    cout<<*max_element(dp.begin(), dp.end())<<endl;




}






int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int T = 1; 
    while(T--) {
        solve();
    }
    return 0;
}


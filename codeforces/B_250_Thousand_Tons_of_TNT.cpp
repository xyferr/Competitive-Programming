#include<bits/stdc++.h>
#define ll long long
using namespace std;




void solve() {
    ll n; cin>>n;
    vector<ll> v(n);
    for(ll i=0; i<n; i++) cin>>v[i];
    ll ans = -1 ;
    
    for(ll i=1; i<=n; ++i){
        if(n%i==0){
            ll best = INT_MIN , least = INT64_MAX;
            
            for(ll j=0; j<n; j+=i){
               
                ll cur=0;
                for(ll m = j; m<j+i; m++){
                    cur+=v[m];
                }
                best = max(best,cur);
                least = min(least , cur);
                
                
            }
            // cout<<best<<"-"<<least<<" ";
            ans = max(best-least,ans);
        }
    }
    cout<<ans<<'\n';
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


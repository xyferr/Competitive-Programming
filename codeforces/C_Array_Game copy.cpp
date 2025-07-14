#include<bits/stdc++.h>
#define ll long long
#define endl "\n"   
using namespace std;




void solve() {
    ll n,k; cin>>n>>k;
    vector<ll> v(n);
    for(ll i=0; i<n; i++) cin>>v[i];
    if(k>=3){
        cout<<0<<endl;
        return;
    }
    sort(v.begin(),v.end());
        
    if(k==1){
        ll res = v[0];
        for(ll i=1; i<n; i++){
            res = min(res,abs(v[i]-v[i-1]));
        }
        cout<<res<<endl;
    }
    else{
        ll res = v[0];
        for(ll i=1; i<n; i++){
            res = min(res,abs(v[i]-v[i-1]));
        }

        // unordered_map<ll,ll> mp;
        // for(auto it: v) mp[it]++;

        for(ll i=0; i<n; i++){
            ll cur;
            for(ll j=0; j<n; j++){
                if(i!=j) cur = abs(v[i]-v[j]);
                ll idx = lower_bound(v.begin(),v.end(),cur)-v.begin();
                if(idx<n) {
                    res = min(res,abs(v[idx]-cur));
                    res = min(res,abs(v[idx-1]-cur));
                }

            }
        }
        cout<<res<<endl;

    }





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


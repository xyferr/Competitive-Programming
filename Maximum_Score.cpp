#include<bits/stdc++.h>
#define ll long long
#define endl '\n'

using namespace std;
void prv(vector<ll>&vec);




void solve() {
    ll n; cin>>n;
    vector<ll> v(n);
    ll ct1=0; ll ct0=0;
    for(ll i=0; i<n; i++) {
        ll x; cin>>x;
        if(x==1){
            ct1++;
        }
        else ct0++;
        v[i]=x;
    }
    
        
    ll ans=min(ct1,ct0);
    // for(ll i=0; i+1<n; i+=2){
    //     if(v[i]+v[i+1]==1) ans++;
        
    // }
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

void prv(vector<ll>&vec){
    for(auto it: vec){
        cout<<it<<" ";
    }
    cout<<endl;
}
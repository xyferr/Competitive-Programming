#include<bits/stdc++.h>
#define ll long long


using namespace std;
void prv(vector<ll>&vec);




void solve() {
    ll n; cin>>n;
    vector<ll> v(n);
    for(ll i=0; i<n; i++) cin>>v[i];
    ll ans=0;
    ll mel=INT_MIN;
    vector<bool> vis(n);
    for (ll i = 0; i < n; i++)
    {
        mel=max(mel,v[i]);
        if(v[i]<mel) ans++;
        
    }
    //ans=accumulate(vis.begin(),vis.end(),0LL);
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

void prv(vector<ll>&vec){
    for(auto it: vec){
        cout<<it<<" ";
    }
    cout<<endl;
}
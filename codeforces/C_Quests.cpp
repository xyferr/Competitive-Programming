#include<bits/stdc++.h>
#define ll long long


using namespace std;
void prv(vector<ll>&vec);




void solve() {
    ll n,k; cin>>n>>k;
    vector<ll> a(n),b(n);
    for(ll i=0; i<n; i++) cin>>a[i];
    for(ll i=0; i<n; i++) cin>>b[i];
    ll ans=0,sum=0;
   
    ll maxb=INT_MIN;
    for(ll i=0; i<min(n,k); ++i){
        maxb=max(b[i],maxb);
        sum+=a[i];
        ans=max(ans,sum+(maxb*(k-(i+1))));
    }
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
#include<bits/stdc++.h>
#define ll long long
#define endl '\n'

using namespace std;
void prv(vector<ll>&vec);




void solve() {
    ll n,m; cin>>n>>m;
    vector<ll> v(n);
    for(ll i=0; i<n; i++) cin>>v[i];
    sort(v.begin(),v.end());
    ll ans=0;
    ans=v[n-1]-v[m-1];
    for(ll i=m-2; i>=0; --i)[
        
    ]





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
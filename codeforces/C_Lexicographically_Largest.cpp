#include<bits/stdc++.h>
#define ll long long
using namespace std;




void solve() {
    ll n; cin>>n;
    vector<ll> v(n);
    for(ll i=0; i<n; i++) cin>>v[i];

    for(ll i=0; i<n; i++){
        v[i]+=i+1;
    }
    sort(v.rbegin(),v.rend());

    for(ll i=1; i<n; i++){
        v[i] = min(v[i],v[i-1]-1);
    }

    for(auto it:v){
        cout<<it<<" ";
    }
    cout<<'\n';




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


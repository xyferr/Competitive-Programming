#include<bits/stdc++.h>
#define ll long long
using namespace std;




void solve() {
    ll n; cin>>n;
    vector<ll> v(n);
    for(ll i=0; i<n; i++) cin>>v[i];

    ll best=INT_MIN;
    ll cur=INT_MIN;
    for(ll i=0; i<n; i++){
        if(i!=0 && abs(v[i]%2)!=abs(v[i-1]%2)) cur = max(v[i], cur+v[i]);
        else cur = v[i];
        best = max(best,cur); 
    }
    cout<<best<<'\n';



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


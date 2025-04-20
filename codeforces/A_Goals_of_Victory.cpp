#include<bits/stdc++.h>
#define ll long long
using namespace std;




void solve() {
    ll n; cin>>n;
    n--;

    vector<ll> v(n);
    for(ll i=0; i<n; i++) cin>>v[i];
    ll positive = 0;
    ll negative = 0;
    for(ll i=0; i<n; i++){
        if(v[i]>0) positive+=v[i];
        else negative+=v[i];

    }
    ll res = positive+negative;

    cout<<-res<<endl;




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


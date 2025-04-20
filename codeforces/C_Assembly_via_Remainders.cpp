#include<bits/stdc++.h>
#define ll long long
using namespace std;




void solve() {
    ll m; 
    cin>>m;
    m=m-1;
    vector<ll> v(m);
    for(ll i=0; i<m; i++) {
        ll x; cin>>x;
        v[i]=x;
    }
    ll var = 1000;
    vector<ll> output;
    output.push_back(var);
    for(ll i=0; i<m; i++){
        var+=v[i];
        output.push_back(var);
    }
    for(auto it: output){
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


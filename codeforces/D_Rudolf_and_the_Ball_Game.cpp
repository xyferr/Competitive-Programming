#include<bits/stdc++.h>
#define ll long long
using namespace std;




void solve() {
    ll n,m,x; cin>>n>>m>>x;
    map<ll, ll> mp;
    vector<pair<ll,char>> v(m);
    for(ll i=0; i<m; i++){
        cin>>v[i].first;
        v[i].second = i+'a';
    }
    for(ll i=0; i<m; i++){
        if(i==0){
            if(v[i].second=='?'){
                ll temp = 
            }
        }
    }




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


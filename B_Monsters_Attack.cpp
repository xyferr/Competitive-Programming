#include<bits/stdc++.h>
#define ll long long
using namespace std;

// rohit //


void solve() {
    ll n,k; cin>>n>>k;
    vector<ll> x(n),a(n);
    for(ll i=0; i<n; i++) {
        ll y; cin>>y;
        a[i]=y;
    }
    for(ll i=0; i<n; i++) cin>>x[i];

    map<ll,ll> map;

    for(ll i=0; i<n; i++){
        map[abs(x[i])]+=a[i];
    }

    ll damage = 0;

    for(auto it:map){
        if(((it.first*k)-damage)<it.second){
            cout<<"NO\n";
            return;
        }
        else damage += (it.second); 
        
    }

    cout<<"YES\n";  





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


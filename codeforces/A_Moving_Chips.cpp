#include<bits/stdc++.h>
#define ll long long
using namespace std;


// nymeria //
// hidden //

void solve() {
    ll n; cin>>n;
    vector<ll> v(n);
    for(ll i=0; i<n; i++) cin>>v[i];

    ll res=0;
    ll minm=0;

    for(ll i=0; i<n; i++){
        if(v[i]==1){
            minm=i;
            break;
        }
    }


    ll p=0;
    for(ll i=n-1; i>=0; i--){
        if(v[i]==1){
            p=i;
            break;
        }
    }

    for(ll i=minm; i<=p; i++){
        if(v[i]==0) res++;
    }

    cout<<res<<endl;




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


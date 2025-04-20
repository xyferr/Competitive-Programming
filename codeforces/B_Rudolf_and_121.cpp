#include<bits/stdc++.h>
#define ll long long
using namespace std;




void solve() {
    ll n; cin>>n;
    vector<ll> v(n);
    for(ll i=0; i<n; i++) cin>>v[i];

  

    for(ll i=0; i<n; i++){
        if(v[i]<0){
            cout<<"NO\n";
            return;
        }
        if( v[i]!=0 && i+2>=n){
            cout<<"NO\n";
            return;
        }
        if(v[i]>0){
            
            v[i+1]-= (2*v[i]);
            v[i+2] -= v[i];
            v[i]-=v[i];
        }
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


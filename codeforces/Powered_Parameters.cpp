#include<bits/stdc++.h>
#define ll long long
using namespace std;




void solve() {
    ll n; cin>>n;
    vector<ll> v(n);
    for(ll i=0; i<n; i++) cin>>v[i];

    ll count =0; 

    for(int i=0; i<n; i++){
        if(v[i]==1){
            count+=n;
        }
        else{
            
            ll temp = 1;
            for(int j=0; j<n; j++){
                temp *= v[i];
                if(temp>1e9) break;
                if(temp <= v[j]) count++;
            }
        }
        
        
    }
    cout<<count<<endl;



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


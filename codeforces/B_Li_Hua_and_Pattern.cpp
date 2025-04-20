#include<bits/stdc++.h>
#define ll long long
using namespace std;




void solve() {
    ll n,k; cin>>n>>k;
    vector<vector<ll>> v(n, vector<ll>(n));
    for(ll i=0; i<n; i++){
        for(ll j=0; j<n; j++){
            cin>>v[i][j];
        }
    }

    ll count=0;
   
    for(ll i=n-1; i>=0; i--){
        
        for(ll j=n-1; j>=0; j--){
            count+=(v[i][j]==v[n-i-1][n-j-1]);
        }
        
    }

    count = n*n - count;
    count = count/2;
    // cout<<count<<'\n';

    if(count>k){
        cout<<"NO\n";
    }
    else{
        if(n&1){
            cout<<"YES\n";
        }
        else if( (k-count)&1){
            cout<<"NO\n";
        }
        else{
            cout<<"YES\n";
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


#include<bits/stdc++.h>
#define ll long long
using namespace std;




void solve() {
    ll n; cin>>n;
    vector<ll> v(n);
    for(ll i=0; i<n; i++) cin>>v[i];
    ll minimum_positive = INT_MAX;
    for(ll i=0; i<n; i++){
        minimum_positive = min(minimum_positive,abs(v[i]));
    }
    cout<<minimum_positive<<endl;
    



    

}






int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int T = 1; 
    // cin >> T;
    while(T--) {
        solve();
    }
    return 0;
}


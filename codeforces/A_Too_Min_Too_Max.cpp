#include<bits/stdc++.h>
#define ll long long
using namespace std;




void solve() {
    ll n; cin>>n;
    vector<ll> v(n);
    for(ll i=0; i<n; i++) cin>>v[i];
    sort(v.begin(), v.end());
    ll sum1=abs(v[0]-v[n-2])+abs(v[n-2]-v[1])+abs(v[1]-v[n-1])+abs(v[n-1]-v[0]);
    // ll sum2=0;
    // for(ll i=0; i<4; i++){
    //     sum2+=v[i];
    // }
    cout<<sum1<<endl;




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


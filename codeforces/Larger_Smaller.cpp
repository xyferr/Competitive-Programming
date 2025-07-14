#include<bits/stdc++.h>
#define ll long long
using namespace std;




void solve() {
    ll n; cin>>n;
    vector<ll> a(n);
    for(ll i=0; i<n; i++) cin>>a[i];
    sort(a.begin(),a.end());
    ll res = a[n-1]-a[0]-1;
    res = max(0LL,res);
    cout<<res<<endl;
    




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


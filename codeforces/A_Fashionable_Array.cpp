#include<bits/stdc++.h>
#define ll long long
#define endl "\n"   
using namespace std;




void solve() {
    ll n; cin>>n;
    vector<ll> v(n);
    for(ll i=0; i<n; i++) cin>>v[i];
    sort(v.begin(), v.end());
    ll least = v[0];
    ll best = v[n-1];
    if((least+best) % 2 == 0) {
        cout << "0" << endl;
    } else {
        ll res = INT_MAX;
        for(ll i=1; i<n; i++) {
            if(v[i]%2 != least%2) {
                res = min(res, i);
            }
        }
        for(ll i=n-2; i>=0; i--) {
            if(v[i]%2 != best%2) {
                res = min(res, n-1-i);
            }
        }
        cout<< res << endl;
    }




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


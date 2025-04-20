#include <bits/stdc++.h>
#define ll long long
using namespace std;



void solve() {
    ll n; 
    cin >> n;
    vector<ll> v(n);
    
    for (ll i = 0; i < n; i++) cin >> v[i];
    
    ll res = 0;
    ll neg = 0;
    for(ll i=0; i<n; i++){
        res+=v[i];
        neg=min(neg,res);
    }

    res = res-(2*neg);
    cout<<res<<endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int T;
    cin >> T;
    while (T--) {
        solve();
    }
    return 0;
}

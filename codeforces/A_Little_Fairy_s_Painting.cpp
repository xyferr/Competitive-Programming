#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;

void solve() {
    ll n; cin >> n;
    set<ll> s;
    for (ll i = 0; i < n; ++i) {
        ll x; cin >> x;
        s.insert(x);
    }
    bool flag = true;
    for(auto it: s) {
        if(it >=s.size()) {
            flag = false;
            cout<<it<<endl;
            break;
        }
    }
    if(flag) cout<<100000000000000000<<endl;

    









}













int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int T = 1;
    cin >> T;
    while (T--) {
        
        solve();
    }
    return 0;
}
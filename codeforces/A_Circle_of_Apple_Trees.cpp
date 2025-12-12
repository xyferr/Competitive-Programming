#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;

void solve() {
    ll n; cin >> n;
    vector<ll> v(n);
    for (ll i = 0; i < n; ++i) cin >> v[i];
    set<ll> st(v.begin(), v.end());
    ll res=st.size();
    cout << res << endl;











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
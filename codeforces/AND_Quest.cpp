#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
    ll n, k;
    cin >> n >> k;
    vector<ll> v(n);
    for (ll i = 0; i < n; i++) cin >> v[i];
    
    vector<pair<ll, ll>> relevant;
    for (ll i = 0; i < n; i++) {
        if ((v[i] & k) == k) relevant.push_back({v[i], i + 1});
    }
    
    ll r_size = relevant.size();
    for (ll mask = 1; mask < (1LL << r_size); mask++) {
        ll current_and = -1;
        vector<ll> subset;
        for (ll i = 0; i < r_size; i++) {
            if (mask & (1LL << i)) {
                subset.push_back(relevant[i].second);
                current_and = (current_and == -1 ? relevant[i].first : (current_and & relevant[i].first));
            }
        }
        if (current_and == k) {
            cout << "YES\n" << subset.size() << "\n";
            for (auto index : subset) cout << index << " ";
            cout << "\n";
            return;
        }
    }
    cout << "NO\n";
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

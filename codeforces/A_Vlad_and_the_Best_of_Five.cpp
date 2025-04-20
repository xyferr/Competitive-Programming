#include <bits/stdc++.h>
#define ll long long
using namespace std;

const ll MOD = 998244353;
const ll MAX_TARGET = 4 * 1e6;

void solve() {
    ll t;
    cin >> t;
    vector<ll> queries(t);
    for (ll i = 0; i < t; i++) {
        cin >> queries[i];
    }

    // Precompute the `pre` array
    vector<ll> pre(20);
    pre[0] = 4;
    ll start = 8;
    for (ll i = 1; i < 20; i++) {
        pre[i] = pre[i - 1] * 2 + start;
        start *= 2;
    }

    // Use 1D DP array
    vector<ll> dp(MAX_TARGET + 1, 0);

    // Base case: There is 1 way to achieve sum 0
    dp[0] = 1;

    // Fill DP array
    for (ll i = 0; i < pre.size(); i++) {
        for (ll j = pre[i]; j <= MAX_TARGET; j++) {
            dp[j] = (dp[j] + dp[j - pre[i]]) % MOD;
        }
    }

    // Answer queries
    for (ll y : queries) {
        cout << dp[y] << "\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();
    return 0;
}

#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;

ll simulate(const vector<ll>& p, ll l, ll r, ll k, const vector<ll>& pos) {
    ll n = p.size();
    
    // Convert to 0-based index
    l--; r--;
    ll idx_k = pos[k];
    
    // Check if k is in the range [l, r]
    if (idx_k < l || idx_k > r) return -1;

    ll lo = l, hi = r, bad = 0;
    while (lo <= hi) {
        ll mid = (lo + hi) / 2;
        ll val = p[mid];

        if (val == k) return bad;

        if (mid < idx_k) {
            // We must go right, so val must be < k
            if (val >= k) bad++;
            lo = mid + 1;
        } else if (mid > idx_k) {
            // We must go left, so val must be > k
            if (val <= k) bad++;
            hi = mid - 1;
        } else {
            // mid == idx_k, value is not k (since we already checked), so it's impossible
            return -1;
        }
    }
    return -1;
}

void solve() {
    ll n, q;
    cin >> n >> q;
    vector<ll> p(n);
    vector<ll> pos(n + 1); // pos[val] = index of val in p
    for (ll i = 0; i < n; ++i) {
        cin >> p[i];
        pos[p[i]] = i;
    }

    while (q--) {
        ll l, r, k;
        cin >> l >> r >> k;
        cout << simulate(p, l, r, k, pos) << " ";
    }
    cout << endl;
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    ll t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
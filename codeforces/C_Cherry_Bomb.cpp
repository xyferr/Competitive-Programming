#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
    int n;
    ll k;
    cin >> n >> k;

    vector<ll> a(n), b(n);
    for(int i = 0; i < n; ++i) cin >> a[i];
    for(int i = 0; i < n; ++i) cin >> b[i];

    ll x = -1;
    bool invalid = false;
    for (int i = 0; i < n; ++i) {
        if (b[i] != -1) {
            ll sum = a[i] + b[i];
            if (x == -1) x = sum;
            else if (x != sum) {
                invalid = true;
                break;
            }
        }
    }

    if (invalid) {
        cout << 0 << '\n';
        return;
    }

    if (x != -1) {
        for (int i = 0; i < n; ++i) {
            if (b[i] == -1) {
                ll bi = x - a[i];
                if (bi < 0 || bi > k) {
                    cout << 0 << '\n';
                    return;
                }
            }
        }
        cout << 1 << '\n';
        return;
    }

    ll low = 0, high = 2 * k;
    for (int i = 0; i < n; ++i) {
        ll l = a[i], r = a[i] + k;
        low = max(low, l);
        high = min(high, r);
    }

    if (low > high) cout << 0 << '\n';
    else cout << (high - low + 1) << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    while (t--) solve();
    return 0;
}

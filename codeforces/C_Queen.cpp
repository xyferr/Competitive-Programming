#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
    ll n; cin >> n;
    vector<vector<ll>> children(n + 1);
    vector<ll> a(n + 1); 
    // vector<ll> parent(n + 1, -1);

    for (ll i = 1; i <= n; i++) {
        ll p, ai;
        cin >> p >> ai;
        a[i] = ai;
        // parent[i] = p;
        if (p != -1) {
            children[p].push_back(i);
        }
    }

    vector<ll> ans;
    for (ll i = 1; i <= n; i++) {
        if (a[i] == 1) {
            bool all_bad = true;
            for (ll child : children[i]) {
                if (a[child] == 0) {
                    all_bad = false;
                    break;
                }
            }
            if (all_bad) ans.push_back(i);
        }
    }

    if (ans.empty()) cout << -1 << endl;
    else {
        for (ll x : ans) cout << x << " ";
        cout << endl;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}


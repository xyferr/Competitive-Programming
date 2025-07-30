#include<bits/stdc++.h>
#define ll long long
#define endl "\n"   
using namespace std;

const int MOD = 998244353;

ll power(ll base, ll exp) {
    ll res = 1;
    base %= MOD;
    while (exp > 0) {
        if (exp % 2 == 1) res = (res * base) % MOD;
        base = (base * base) % MOD;
        exp /= 2;
    }
    return res;
}

ll modInverse(ll n) {
    return power(n, MOD - 2);
}

struct Seg {
    int l, r;
    ll p, inv_p, v;
};

vector<ll> tree, lazy;
int si;

void build(int n) {
    si = 1;
    while (si < n) si *= 2;
    tree.assign(2 * si, 0);
    lazy.assign(2 * si, 1);
}

void push(int x, int lx, int rx) {
    if (lazy[x] == 1 || rx == lx + 1) return;
    tree[2 * x + 1] = (tree[2 * x + 1] * lazy[x]) % MOD;
    lazy[2 * x + 1] = (lazy[2 * x + 1] * lazy[x]) % MOD;
    tree[2 * x + 2] = (tree[2 * x + 2] * lazy[x]) % MOD;
    lazy[2 * x + 2] = (lazy[2 * x + 2] * lazy[x]) % MOD;
    lazy[x] = 1;
}

void range_multiply(int l, int r, ll val, int x, int lx, int rx) {
    if (lx >= r || l >= rx) return;
    if (lx >= l && rx <= r) {
        tree[x] = (tree[x] * val) % MOD;
        lazy[x] = (lazy[x] * val) % MOD;
        return;
    }
    push(x, lx, rx);
    int m = (lx + rx) / 2;
    range_multiply(l, r, val, 2 * x + 1, lx, m);
    range_multiply(l, r, val, 2 * x + 2, m, rx);
}

void set_val(int i, ll val, int x, int lx, int rx) {
    if (rx == lx + 1) {
        tree[x] = val;
        return;
    }
    push(x, lx, rx);
    int m = (lx + rx) / 2;
    if (i < m) {
        set_val(i, val, 2 * x + 1, lx, m);
    } else {
        set_val(i, val, 2 * x + 2, m, rx);
    }
}

ll query(int i, int x, int lx, int rx) {
    if (rx == lx + 1) {
        return tree[x];
    }
    push(x, lx, rx);
    int m = (lx + rx) / 2;
    if (i < m) {
        return query(i, 2 * x + 1, lx, m);
    } else {
        return query(i, 2 * x + 2, m, rx);
    }
}

void solve() {
    int n, m;
    cin >> n >> m;

    vector<vector<Seg>> segments_by_r(m + 1);
    for (int i = 0; i < n; ++i) {
        int l, r;
        ll p_num, q_num;
        cin >> l >> r >> p_num >> q_num;
        ll prob = (p_num * modInverse(q_num)) % MOD;
        ll inv_prob = (1 - prob + MOD) % MOD;
        ll v_ratio = (prob * modInverse(inv_prob)) % MOD;
        segments_by_r[r].push_back({l, r, prob, inv_prob, v_ratio});
    }

    build(m + 1);
    vector<ll> dp(m + 1, 0);
    dp[0] = 1;

    for (int i = 1; i <= m; ++i) {
        // Update step
        for (const auto& seg : segments_by_r[i]) {
            range_multiply(0, seg.l, seg.inv_p, 0, 0, si);
        }

        // Set new value for A_i(i)
        ll p_none_ii = 1;
        for (const auto& seg : segments_by_r[i]) {
            if (seg.l == i) {
                p_none_ii = (p_none_ii * seg.inv_p) % MOD;
            }
        }
        ll a_ii = (dp[i - 1] * p_none_ii) % MOD;
        set_val(i, a_ii, 0, 0, si);

        // Calculate dp[i]
        for (const auto& seg : segments_by_r[i]) {
            ll a_il = query(seg.l, 0, 0, si);
            dp[i] = (dp[i] + a_il * seg.v) % MOD;
        }
    }

    cout << dp[m] << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int T = 1; 
    // cin >> T;
    while(T--) {
        solve();
    }
    return 0;
}
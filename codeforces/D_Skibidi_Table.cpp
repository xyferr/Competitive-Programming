#include <bits/stdc++.h>
using namespace std;
using ll = long long;

pair<ll, ll> cord(ll size, ll base, ll target) {
    if (size == 2) {
        ll offset = target - base;
        if (offset == 0) return {1, 1};     
        if (offset == 1) return {2, 2};     
        if (offset == 2) return {2, 1};     
        return {1, 2};                        
    }

    ll quarter = (size * size) / 4;
    ll half = size / 2;

    if (target < base + quarter) {
        auto [x, y] = cord(half, base, target);
        return {x, y};
    } else if (target < base + 2 * quarter) {
        auto [x, y] = cord(half, base + quarter, target);
        return {x + half, y + half};
    } else if (target < base + 3 * quarter) {
        auto [x, y] = cord(half, base + 2 * quarter, target);
        return {x + half, y};
    } else {
        auto [x, y] = cord(half, base + 3 * quarter, target);
        return {x, y + half};
    }
}

ll num(ll size, ll base, ll x, ll y) {
    if (size == 2) {
        if (x == 1 && y == 1) return base;
        if (x == 2 && y == 2) return base + 1;
        if (x == 2 && y == 1) return base + 2;
        return base + 3;
    }

    ll quarter = (size * size) / 4;
    ll half = size / 2;

    if (x <= half && y <= half) {
        return num(half, base, x, y);
    } else if (x > half && y > half) {
        return num(half, base + quarter, x - half, y - half);
    } else if (x > half && y <= half) {
        return num(half, base + 2 * quarter, x - half, y);
    } else {
        return num(half, base + 3 * quarter, x, y - half);
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    while (t--) {
        int n, q;
        cin >> n >> q;

        ll size = (1LL << n);

        while (q--) {
            string op;
            cin >> op;

            if (op == "->") {
                ll x, y;
                cin >> x >> y;
                cout << num(size, 1, x, y) << '\n';
            } else if (op == "<-") {
                ll d;
                cin >> d;
                auto [x, y] = cord(size, 1, d);
                cout << x << " " << y << '\n';
            }
        }
    }

    return 0;
}

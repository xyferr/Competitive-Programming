#include <bits/stdc++.h>
#define ll long long
using namespace std;

const int SQRT_MAX = 31623;
vector<int> primes;

void build_sieve() {
    vector<bool> is_prime(SQRT_MAX, true);
    is_prime[0] = is_prime[1] = false;
    for (int i = 2; i < SQRT_MAX; i++) {
        if (is_prime[i]) {
            primes.push_back(i);
            for (int j = i * 2; j < SQRT_MAX; j += i) {
                is_prime[j] = false;
            }
        }
    }
}

bool is_prime(ll n) {
    if (n < 2) return false;
    for (ll p : primes) {
        if (p * p > n) break;
        if (n % p == 0) return false;
    }
    return true;
}

void solve() {
    ll n, k;
    cin >> n >> k;

    if (n == 1) {
        if (k == 2) cout << "YES\n";
        else cout << "NO\n";
        return;
    }

    if (k > 1) {
        cout << "NO\n";
        return;
    }

    if (is_prime(n)) cout << "YES\n";
    else cout << "NO\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    build_sieve();

    int T;
    cin >> T;
    while (T--) {
        solve();
    }

    return 0;
}

#include <bits/stdc++.h>
#define ll long long
using namespace std;

vector<int> generate_primes(int limit) {
    vector<bool> is_prime(limit + 1, true);
    vector<int> primes;
    is_prime[0] = is_prime[1] = false;
    for (int i = 2; i <= limit; i++) {
        if (is_prime[i]) {
            primes.push_back(i);
            for (int j = i * 2; j <= limit; j += i) {
                is_prime[j] = false;
            }
        }
    }
    return primes;
}

void solve() {
    ll n, k;
    cin >> n >> k;

    ll max_pairs = (n * (n - 1)) / 2;
    if (k > max_pairs) {
        cout << -1 << "\n";
        return;
    }

    vector<int> primes = generate_primes(2e6);  // Generate primes up to 2 million
    vector<int> result;

    ll pairs_formed = 0;
    for (int i = 0; i < n; i++) {
        result.push_back(primes[i]);
        pairs_formed += i;
        if (pairs_formed >= k) {
            break;
        }
    }

    if (pairs_formed > k) {
        ll excess = pairs_formed - k;
        for (int i = 0; i < excess; i++) {
            result[i] = 2;  // Replace some primes with 2 to reduce pairs
        }
    }

    while (result.size() < n) {
        result.push_back(2);  // Fill the rest with 2
    }

    for (int num : result) {
        cout << num << " ";
    }
    cout << "\n";
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

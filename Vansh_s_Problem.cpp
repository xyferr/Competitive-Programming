#include <bits/stdc++.h>
using namespace std;

vector<int> sieve(int n) {
    vector<int> primes;
    vector<bool> isPrime(n + 1, true);
    isPrime[0] = isPrime[1] = false;
    for (int i = 2; i * i <= n; i++) {
        if (isPrime[i]) {
            for (int j = i * i; j <= n; j += i) {
                isPrime[j] = false;
            }
        }
    }
    for (int i = 2; i <= n; i++) {
        if (isPrime[i]) primes.push_back(i);
    }
    return primes;
}

int countDivisors(long long n, const vector<int>& primes) {
    int divisors = 1;
    long long temp = n;

    for (int p : primes) {
        if ((long long)p * p > temp) break;
        if (temp % p == 0) {
            int count = 0;
            while (temp % p == 0) {
                temp /= p;
                count++;
            }
            divisors *= (count + 1);
        }
    }

    if (temp > 1) divisors *= 2; // remaining prime factor
    return divisors;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int Q; 
    cin >> Q; // number of queries

    vector<int> primes = sieve(31622);

    while (Q--) {
        long long n;
        cin >> n;
        cout << countDivisors(n, primes) << "\n";
    }
    return 0;
}

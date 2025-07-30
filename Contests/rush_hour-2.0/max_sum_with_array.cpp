#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
    ll n;
    cin >> n;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++) {
        cin >> a[i];
    }

    sort(a.rbegin(), a.rend());

    ll alternating_sum = 0;
    for (ll i = 0; i < n/2; i++) {
        alternating_sum += a[i];
        // cout<<a[i]<<" ";

    }
    for(ll i =n-1; i>n/2; i--) {
        alternating_sum -= a[i];
        // cout<<a[i]<<" ";
    }
    if(n%2==1) {
        alternating_sum += a[(n/2)];
        // cout<<a[(n/2)+1]<<" ";
    }
    else{
        alternating_sum -= a[(n/2)];
        // cout<<a[(n/2)]<<" ";
    }

    cout << alternating_sum << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;
    while (T--) {
        solve();
    }

    return 0;
}

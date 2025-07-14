#include<bits/stdc++.h>
#define ll long long
#define endl "\n"   
using namespace std;
bool valid(vector<ll>& a, vector<ll>& b, ll k) {
    ll n = a.size(), m = b.size();
    
    ll i = n-1, j = m-1;
    while (i >= 0 && j >= 0) {
        if (a[i] >= b[j]) {
            i--;
            j--;
        } else {
            i--;
        }
    }

    if (j == -1) return true;

    ll ind = j;  

    i = n - 1;
    j = m - 1;
    bool used_k = false;

    while (j >= 0) {
        if (i >= 0 && a[i] >= b[j]) {
            i--;
            j--;
        } else if (!used_k && j == ind && k >= b[j]) {
            used_k = true;
            j--;
        } else {
            i--;
        }

        // if we run out of a and still have b left, break early
        if (i < 0 && (j >= 0 && !(j == ind && !used_k && k >= b[j]))) {
            break;
        }
    }

    return j == -1;
}


void solve() {
    ll n, m;
    cin >> n >> m;
    vector<ll> a(n), b(m);
    for (ll i = 0; i < n; i++) cin >> a[i];
    for (ll i = 0; i < m; i++) cin >> b[i];

    if (valid(a, b, -1)) {
        cout << 0 << endl;
        return;
    }

    int left = 1, right = 1e9, ans = -1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (valid(a, b, mid)) {
            ans = mid;
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }

    cout << ans << endl;
}





int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int T = 1; 
    cin >> T;
    while(T--) {
        solve();
    }
    return 0;
}


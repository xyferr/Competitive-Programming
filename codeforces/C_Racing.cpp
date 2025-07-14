#include <bits/stdc++.h>
#define ll long long
#define endl "\n"   
using namespace std;




void solve() {
    ll n; cin >> n;

    vector<ll> d(n);
    for(ll i = 0; i < n; i++) cin >> d[i];

    vector<pair<ll, ll>> v(n);
    for(ll i = 0; i < n; i++) {
        ll l, r;
        cin >> l >> r;
        v[i] = {l, r};
    }

    vector<ll> low(n + 1), high(n + 1);
    low[0] = 0;
    high[0] = 0;

    ll left = 0, right = 0;
    for(ll i = 1; i <= n; i++) {
        if(d[i - 1] == -1) {
            right += 1;
        } else {
            left += d[i - 1];
            right += d[i - 1];
        }

        left = max(left, v[i - 1].first);
        right = min(right, v[i - 1].second);

        if(left > right) {
            cout << "-1" << endl;
            return;
        }

        low[i] = left;
        high[i] = right;
    }

    vector<ll> heights(n + 1);
    heights[n] = low[n];
    vector<ll> ans(n);

    for(ll i = n - 1; i >= 0; i--) {
        if(d[i] != -1) {
            ans[i] = d[i];
            heights[i] = heights[i + 1] - d[i];
        } else {
            
            if(heights[i + 1] >= low[i] && heights[i + 1] <= high[i]) {
                ans[i] = 0;
                heights[i] = heights[i + 1];
            } else {
                ans[i] = 1;
                heights[i] = heights[i + 1] - 1;
            }
        }
    }

    for(ll i = 0; i < n; i++) {
        cout << ans[i] << " ";
    }
    cout << endl;
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

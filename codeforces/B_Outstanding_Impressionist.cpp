#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
    ll n;
    cin >> n;
    vector<pair<ll, ll>> v(n);
    map<ll, ll> mp;
    ll sz = 2*(n);
    vector<ll> cnt(sz, 0);
    for (ll i = 0; i < n; i++) {
        ll x, y;
        cin >> x >> y;
        v[i] = {x, y};
      
        if (x == y) {
            mp[y]++;
            cnt[y-1]=1;
        }
    }

    vector<ll> prefix(sz+1, 0);
   
    for (ll i = 1; i <=sz; i++) {
        prefix[i] = prefix[i-1] + cnt[i-1];
    }
    

    string ans = "";
    for (ll i = 0; i < n; i++) {
        ll x = v[i].first, y = v[i].second;
        
        if (x == y) {
            mp[x]--;
            if (mp[x] == 0) {
                ans += "1";
            } else {
                ans += "0";
            }
            mp[x]++; 
        } else {
            ll diff = prefix[y] - prefix[x-1];
            // cerr<<x<<" "<<y<<" "<<diff<<" "<<prefix[y]<<" "<<prefix[x-1]<<"\n";
            if ((y-(x-1))>diff) {
                ans += "1";
            } else {
                ans += "0";
            }
            

        }
    }
    // cerr<<"-"<<"\n";
    cout << ans << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int T = 1;
    cin >> T;
    while (T--) {
        solve();
    }
    return 0;
}

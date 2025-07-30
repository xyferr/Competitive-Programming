#include<bits/stdc++.h>
#define ll long long
#define endl "\n"   
using namespace std;

void solve() {
    int n;
    ll k;
    cin >> n >> k;
    vector<vector<ll>> v(n, vector<ll>(3));
    for (int i = 0; i < n; ++i) {
        cin >> v[i][0] >> v[i][1] >> v[i][2];
    }
    sort(v.begin(), v.end());
    priority_queue<ll> pq;
    int ind = 0;   
    while (true) {
        while (ind < n && v[ind][0] <= k) {  
            if (k <= v[ind][1]) {
                 pq.push(v[ind][2]);
            }
            ind++;
        }

        if (pq.empty()) {
            break;
        }

        ll res = pq.top();
        pq.pop();

        if (res > k) {
            k = res;
        } 
        else {
            pq.push(res);
            break;
        }
    }
    cout << k << endl;
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
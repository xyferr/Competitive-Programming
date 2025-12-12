#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;

void solve() {
    ll n; cin >> n;
    vector<ll> v(n);
    ll min_val = LLONG_MAX;
    ll max_val = LLONG_MIN;
    for (ll i = 0; i < n; ++i) {
        cin >> v[i];
        min_val = min(min_val, v[i]);
        max_val = max(max_val, v[i]);
    }
    string x; cin >> x;
    for(int i=0; i<n; i++){
        if(x[i]=='1'){
            if(v[i]==min_val || v[i]==max_val){
                cout<<-1<<endl;
                return;
            }
        }
    }
    cout<<1<<endl;
    cout<<1<<" "<<n<<endl;
    









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
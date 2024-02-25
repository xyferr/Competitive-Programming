#include<bits/stdc++.h>
#define ll long long


using namespace std;
template <typename T>
void prv(const vector<T>& vec);




void solve() {
    vector<pair<ll,ll>> v(4);
    for(ll i=0; i<4; i++) cin>>v[i].first>>v[i].second;

    sort(v.begin(), v.end());
    
    ll x=abs(v[0].second-v[1].second);
    // cout<<x<<'\n';
    cout<<x*x<<'\n';




}












template <typename T>
void prv(const vector<T>& vec) {
    for (const auto& element : vec) {
        cout << element << " ";
    }
    cout <<'\n';
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int T = 1; cin >> T;
    while(T--) {
        solve();
    }
    return 0;
}


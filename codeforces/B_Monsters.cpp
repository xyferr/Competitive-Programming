#include<bits/stdc++.h>
#define ll long long


using namespace std;
template <typename T>
void prv(const vector<T>& vec);




void solve() {
    ll n,k; cin>>n>>k;
    vector<pair<ll,ll>> v(n);
    for(ll i=0; i<n; i++) {
        ll x; cin>>x;
        x%=k;
        if(!x) x=k;
        v[i]={x,i+1};
    }
    // for(ll i=0; i<n; i++) {
    //     cout<<v[i].first<<" ";
    // }
    // cout<<'\n';
   stable_sort(v.begin(),v.end(), [&](pair<ll,ll> i, pair<ll,ll> j){
         return i.first>j.first;
   });
    for(ll i=0; i<n; i++) {
        cout<<v[i].second<<" ";
    }
    // for(ll i=n-1; i>=0; --i) {
    //     cout<<v[i].second<<" ";
    // }
    cout<<'\n';






}












template <typename T>
void prv(const vector<T>& vec) {
    for (const auto& element : vec) {
        cout << element << "";
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


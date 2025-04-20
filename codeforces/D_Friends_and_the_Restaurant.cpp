#include<bits/stdc++.h>
#define ll long long


using namespace std;
template <typename T>
void prv(const vector<T>& vec);




void solve() {
    ll n; cin>>n;
    vector<ll> v(n),cost(n);
    for(ll i=0; i<n; ++i) cin>>v[i];
    for(ll i=0; i<n; ++i) cin>>cost[i];

    vector<pair<ll,ll>> vp(n);
    for(ll i=0; i<n; ++i) vp[i]={v[i],cost[i]};
    sort(vp.begin(),vp.end(),[](pair<ll,ll> a, pair<ll,ll> b){
            return (a.first-a.second)<(b.first-b.second);
            });
    
    ll low=0,up=n-1;
    while(low<up){
        if(vp[low].first+vp[up].first<=vp[low].second+vp[up].second){
            low++;
            up--;
        }
        else{
            up--;
        }
    }
    cout<<low<<'\n';




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


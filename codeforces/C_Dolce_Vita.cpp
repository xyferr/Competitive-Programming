#include<bits/stdc++.h>
#define ll long long


using namespace std;
template <typename T>
void prv(const vector<T>& vec);





void solve() {
    ll n,x; cin>>n>>x;
    vector<ll> v(n);
    for(ll i=0; i<n; i++) cin>>v[i];
    sort(v.begin(),v.end());
    vector<ll> pref(n);
    pref[0]=v[0];
    for(ll i=1; i<n; ++i){
        pref[i]=pref[i-1]+v[i];
    }
    ll ans=0;
    for(ll i=0; i<n; i++){
        if(pref[i]<=x){
            ans+=(x-pref[i])/(i+1)+1;
        }
    }
    cout<<ans<<'\n';






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


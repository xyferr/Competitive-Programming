#include<bits/stdc++.h>
#define ll long long


using namespace std;
template <typename T>
void prv(const vector<T>& vec);




void solve() {
    ll n,f,a,b; cin>>n>>f>>a>>b;

    vector<ll> v(n+1);
    for(ll i=1; i<n+1; i++) cin>>v[i];

    ll ans=0;

    for(ll i=1; i<n+1; i++){
        ll cur = min(a*(v[i]-v[i-1]),b);
        ans+=cur;
    }
    if(ans<f) cout<<"YES\n";
    else cout<<"NO\n";






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


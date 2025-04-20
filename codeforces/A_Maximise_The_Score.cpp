#include<bits/stdc++.h>
#define ll long long


using namespace std;
template <typename T>
void prv(const vector<T>& vec);




void solve() {
    ll n; cin>>n;
    n*=2;
    vector<ll> v(n);
    for(ll i=0; i<n; i++) cin>>v[i];

    sort(v.begin(),v.end());

    ll ans=0;

    for(ll i=0; i<n; i+=2){
        ans+=v[i];
    }

    cout<<ans<<"\n";




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


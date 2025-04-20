#include<bits/stdc++.h>
#define ll long long


using namespace std;
template <typename T>
void prv(const vector<T>& vec);




void solve() {
    ll n; cin>>n;
    vector<ll> v(n);
    for(ll i=0; i<n; i++) cin>>v[i];
    map<ll,ll>mp;
    mp[0]=1;
    ll s=0;
    for(ll i=0; i<n; i++){
        if(i&1) s-=v[i];
        else s+=v[i];
        if(mp[s]){
            cout<<"YES\n";
            return;
        }
        mp[s]=1;
    }
    cout<<"NO\n";
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


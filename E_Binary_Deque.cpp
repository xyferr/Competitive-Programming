#include<bits/stdc++.h>
#define ll long long


using namespace std;
template <typename T>
void prv(const vector<T>& vec);




void solve() {
    ll n,s; cin>>n>>s;
    vector<ll> v(n);
    for(ll i=0; i<n; i++) cin>>v[i];

    vector<ll> pref(n+1);
    pref[0]=v[0];
    for(ll i=1; i<n; ++i){
        pref[i]=pref[i-1]+v[i];
    }

    ll ans=n+1; ll curr=0;
    for(ll i=0, j=0; i<n; ++i){
        while(j+1<n && pref[j+1]-curr<=s){
            j++;
        }
        if(pref[j]-curr==s){
            ans = min (ans , n-(j-i));
        }
        curr+=v[i];
    }
    // prv(pref);
    cout<<(ans>n? -1:ans-1)<<'\n';

    



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


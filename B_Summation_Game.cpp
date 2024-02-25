#include<bits/stdc++.h>
#define ll long long


using namespace std;
template <typename T>
void prv(const vector<T>& vec);




void solve() {
    ll n,k,x; cin>>n>>k>>x;
    vector<ll> v(n);
    for(ll i=0; i<n; i++) cin>>v[i];

    ll res=0;
    ll ans=INT_MIN;
    sort(v.rbegin(), v.rend());
    for(ll i=k; i<min(n,k+x); i++){
        res+=-(v[i]);
    }
    for(ll i=min(n,k+x); i<n; i++){
        res+=(v[i]);
    }
    //cout<<res<<' - ';
    ans=max(ans,res);
    for(ll i=k-1; i>=0; i--){
        res+=-(v[i]);
        if(i+x<n)
        res+=2*(v[i+x]);
        ans=max(ans,res);
    }
    cout<<ans<<'\n';
    




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


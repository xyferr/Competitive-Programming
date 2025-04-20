#include<bits/stdc++.h>
#define ll long long


using namespace std;
void prv(vector<ll>&vec);




void solve() {
    ll n; cin>>n;
    vector<ll> l(n),r(n),c(n);
    for(ll i=0; i<n; i++) cin>>l[i];
    set<ll> s;
    for(ll i=0; i<n; i++){
        ll x; cin>>x;
        s.insert(x);
    }
    for(ll i=0; i<n; i++) cin>>c[i];
    sort(c.rbegin(), c.rend());
    sort(l.begin(), l.end());


    for(ll i=n-1; i>=0; --i){
        auto it=s.upper_bound(l[i]);
        r[i]=(*it)-l[i];
        s.erase(it);
    }
    sort(r.begin(),r.end());
    ll ans=0;
    for(ll i=0; i<n; ++i){
        ans+=c[i]*r[i];
    }


    cout<<ans<<"\n";



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

void prv(vector<ll>&vec){
    for(auto it: vec){
        cout<<it<<" ";
    }
    cout<<endl;
}
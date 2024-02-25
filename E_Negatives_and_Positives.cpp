#include<bits/stdc++.h>
#define ll long long
#define endl '\n'

using namespace std;
void prv(vector<ll>&vec);




void solve() {
    ll n; cin>>n;
    vector<ll> v(n);
    for(ll i=0; i<n; i++) cin>>v[i];
    
    ll ct=0;
    for(ll i =0; i<n; i++){
        if(v[i]<0){
            ct++;
            v[i]=-v[i];
        }
    }
    ll ans=accumulate(v.begin(), v.end(), 0LL);
    if(ct&1){
        sort(v.begin(), v.end());
        cout<<(ans-(2*v[0]))<<"\n";
    }
    else cout<<ans<<"\n";
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
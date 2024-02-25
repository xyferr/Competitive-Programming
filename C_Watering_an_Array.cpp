#include<bits/stdc++.h>
#define ll long long


using namespace std;
void prv(vector<ll>&vec);




void solve() {
    ll n,k,d; cin>>n>>k>>d;
    vector<ll> v(n),b(k);
    for(ll i=0; i<n; i++) cin>>v[i];
    for(ll i=0; i<k; i++) cin>>b[i];
    ll ans=0,c;
    for (ll i = 0; i < min(2*(n+1),d); i++)
    {
        c=0;
        for (ll j = 0; j < n; j++)
        {
            if(v[j]==j+1) c++;
        }
        c+=((d-i-1)/2);
        ans=max(ans,c);
        for (ll m = 0; m < b[i%k]; m++)
        {
            v[m]++;
        }
    }
    cout<<ans<<endl;
    
    




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
#include<bits/stdc++.h>
#define ll long long


using namespace std;
template <typename T>
void prv(const vector<T>& vec);




void solve() {
    ll n; cin>>n;
    vector<pair<ll,ll>> ski(n) , mov(n) , bdg(n);
    for(ll i=0; i<n; i++){
        ll x; cin>>x;
        ski[i]={x,i};
    }
     for(ll i=0; i<n; i++){
        ll x; cin>>x;
        mov[i]={x,i};
    }
      for(ll i=0; i<n; i++){
        ll x; cin>>x;
        bdg[i]={x,i};
    }
    sort(ski.rbegin(),ski.rend());
    sort(mov.rbegin(),mov.rend());
    sort(bdg.rbegin(),bdg.rend());
    ll ans=0;
    for(ll i=0; i<min(n,3LL); i++){
        for (ll j = 0; j < min(n,3LL); j++)
        {
            if(ski[i].second==mov[j].second) continue;
            for (ll k = 0; k < min(n,3LL); k++)
            {
                if(ski[i].second==bdg[k].second || mov[j].second==bdg[k].second) continue;
                ll cur=ski[i].first+mov[j].first+bdg[k].first;
                ans=max(ans,cur);
            }
            
        }
        
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


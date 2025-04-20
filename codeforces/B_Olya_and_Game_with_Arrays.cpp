#include<bits/stdc++.h>
#define ll long long


using namespace std;
template <typename T>
void prv(const vector<T>& vec);




void solve() {
    ll n; cin>>n;
    vector<vector<ll>> v(n);
    for(ll i=0; i<n; i++){
        ll m; cin>>m;
        for(ll j=0; j<m; j++){
            ll x; cin>>x;
            v[i].push_back(x);
        }
        sort(v[i].begin(),v[i].end());
    }
    ll mine=INT_MAX;
    for (ll i = 0; i < n; i++)
    {
        mine=min(mine,v[i][0]);
    }
    //cout<<mine<<'\n';
    ll ans=mine;
    mine=v[0][1];
    //cout<<mine<<'\n';
    for (ll i = 1; i < n; i++)
    {
        if(v[i][1]>=mine){
            ans+=v[i][1];
            
        }
        else{
            ans+=mine;
            mine=v[i][1];
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


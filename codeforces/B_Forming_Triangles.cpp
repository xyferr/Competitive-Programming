#include<bits/stdc++.h>
#define ll long long


using namespace std;
template <typename T>
void prv(const vector<T>& vec);




void solve() {
    ll n; cin>>n;
    vector<ll> v(n);
    for(ll i=0; i<n; i++) cin>>v[i];
    sort(v.begin(),v.end());
    ll ans = 0; 
  //  map<ll,ll> m;
    for(ll i=0; i+2<n; i++){
        
        for (ll j = i+1; j+1 < n; j++)
        {

            ll idx= lower_bound(v.begin()+j+1,v.end(),(pow(2,v[i])+pow(2,v[j])))-v.begin();
            if(idx!=n) ans+=(idx)-(j+1);
            else ans+=(n)-(j+1);
       //     cout<<idx<<" ";

            
           
            
            
            
        }
        
    }
    cout<<ans<<'\n';
   // cout<<'\n';




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


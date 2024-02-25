#include<bits/stdc++.h>
#define ll long long


using namespace std;
template <typename T>
void prv(const vector<T>& vec);




void solve() {
    ll n,k; cin>>n>>k;
    ll x; cin>>x;
    vector<ll> v(n);
    for(ll i=0; i<n; i++) cin>>v[i];
   
    vector<ll> gap;
    // ll ans=0;
    sort(v.begin(),v.end());
    for(ll i=1; i<n; i++){
       
     
        gap.push_back(max(0ll,(v[i]-v[i-1]-1)/x));
        
    }
    sort(gap.begin(), gap.end());

    ll ans= n;
    for(ll i=0; i<gap.size(); i++){

        if(gap[i]<=k){
            k-=gap[i];
            ans--;
        }
    }
    // cout<<gap.size()<<'\n';
    // ans = gap.size()-ans+1;
    cout<<ans<<'\n';




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
    int T = 1; //cin >> T;
    while(T--) {
        solve();
    }
    return 0;
}


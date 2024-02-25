#include<bits/stdc++.h>
#define ll long long


using namespace std;
template <typename T>
void prv(const vector<T>& vec);

// rohit


void solve() {
    ll n; cin>>n;
    map<ll,ll> mp;
    for(ll i=0; i<n; i++){
        ll x; cin>>x; 
        mp[x]++;
    }

    ll ans=mp.begin()->second;
    
    for(auto it=(++mp.begin()); it!=mp.end(); it++){
        auto prevIt = it;
        prevIt--;
      //  cout<<it->second<<"-"<<prevIt->second<<" --- ";
        if(it->first!=(prevIt->first+1)){
            ans+=it->second;
        }
        else if ((it->second) > (prevIt->second)) {
            ans += abs((prevIt->second)-(it->second));
        }
        
    }
    // cout<<'\n';
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
    int T = 1; cin >> T;
    while(T--) {
        solve();
    }
    return 0;
}


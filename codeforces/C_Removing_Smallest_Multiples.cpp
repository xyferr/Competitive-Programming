#include<bits/stdc++.h>
#define ll long long


using namespace std;
template <typename T>
void prv(const vector<T>& vec);




void solve() {
    ll n; cin>>n;
    string s; cin>>s;

    vector<ll> cost(n+1);

    for(ll i=n; i>=1; --i){
        for(ll j=i; j<=n; j+=i){
            if(s[j-1]=='1') break;
            cost[j]=i;
        }
    }

    ll ans=0; 

    for(ll i=0; i<n; i++){
        if(s[i]=='0') {
            ans+= cost[i+1];
        }
    }
  //  prv(cost);
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


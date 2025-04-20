#include<bits/stdc++.h>
#define ll long long


using namespace std;
template <typename T>
void prv(const vector<T>& vec);




void solve() {
    ll n; cin>>n;
    vector<vector<ll>> v(n,vector<ll>(n));

    for(ll i=0; i<n; ++i){
        for(ll j=0; j<n; ++j){
            char c; cin>>c;
            v[i][j]=c-'0';
        }
    }

    ll ans=0;
    for(ll i=0; i<n; ++i){
        
        for(ll j=0; j<n; ++j){
            ll sum=0;
            sum=v[i][j]+v[n-i-1][n-j-1] +v[j][n-i-1]+v[n-j-1][i];
            ans+=min(sum,4-sum);
            // sum=0;
            
        } 
        
    }
    cout<<ans/4<<'\n';





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


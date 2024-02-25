#include<bits/stdc++.h>
#define ll long long


using namespace std;
template <typename T>
void prv(const vector<T>& vec);




void solve() {
    ll n; cin>>n;
    vector<ll> v(n);
    for(ll i=0; i<n; i++) cin>>v[i];
    if(n<3) {
        cout<<"-1\n";
        return;
    }
    for(ll i=0 ; i<n; i++){
        if(v[i]==1) cout<<3<<" ";
        else if(v[i]==3) cout<<1<<" ";
        
        else cout<<v[i]<<" ";
    }
    cout<<'\n';



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


#include<bits/stdc++.h>
#define ll long long


using namespace std;
template <typename T>
void prv(const vector<T>& vec);




void solve() {
    ll n; cin>>n;
    vector<ll> v;
    for(ll i=0; i<n; i++){
        ll x; cin>>x;
        if(i==0) v.push_back(x);
        else if(x!=v.back()) v.push_back(x);
    }
    
    ll sum=0;
    for(ll i=0; i+1<v.size(); i++){
        sum+=abs(v[i]-v[i+1]);
    }
    if(sum==0){
        cout<<1<<'\n';
        return;
    }
    
    ll ans=2;
    for(ll i=1 ; i+1<v.size(); i++){
        if(v[i]>v[i-1] && v[i]>v[i+1] || v[i]<v[i-1] && v[i]<v[i+1]){
            ++ans;
        }
    }
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


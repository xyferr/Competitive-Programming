#include<bits/stdc++.h>
#define ll long long


using namespace std;
template <typename T>
void prv(const vector<T>& vec);




void solve() {
    ll n,cost1; cin>>n>>cost1;
    vector<ll> num_p(n),cost_p(n);
    for(ll i=0; i<n; i++) cin>>num_p[i];
    for(ll i=0; i<n; i++) cin>>cost_p[i];

    vector<pair<ll,ll>>v(n);
    for(ll i=0; i<n; i++){
        v[i]={cost_p[i],num_p[i]};
    }
    sort(v.begin(),v.end());
    ll ans=cost1;
    ll ind=0;
    n--;
    while(n>0){
        if(v[ind].first<cost1){
            ans+=(v[ind].first*min(v[ind].second,n));
            n-=v[ind].second;
        }
        else{
            ans+=cost1;
            n--;
        }
        ind++;
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


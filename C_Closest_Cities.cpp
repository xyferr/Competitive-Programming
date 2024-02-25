#include<bits/stdc++.h>
#define ll long long


using namespace std;
template <typename T>
void prv(const vector<T>& vec);




void solve() {
    ll n; cin>>n;
    vector<ll> v(n);
    for(ll i=0; i<n; i++) cin>>v[i];
    vector<ll> frw(n) ,bck(n);
    
    frw[1]=1;
    if(n>2){
        for(ll i=2; i<n; i++){
        if(v[i]-v[i-1] < v[i-1]-v[i-2]){
            frw[i]=1+frw[i-1];
        }
        else{
            frw[i]=(v[i]-v[i-1])+frw[i-1];
        }
        }

    }
    
  

    bck[n-1]=0;
    bck[n-2]=1;
    if(n>2){
        for(ll i=n-3; i>=0; --i){
        if(abs(v[i]-v[i+1]) < abs(v[i+1]-v[i+2])){
            bck[i]=1+bck[i+1];
        }
        else{
            bck[i]=abs(v[i+1]-v[i])+bck[i+1];
        }
        }

    }
    
  //  prv(frw);
  //  prv(bck);
    ll m; cin>>m;
    vector<pair<ll,ll>> p(m);
    for(ll i=0; i<m; i++){
        ll x,y; cin>>x>>y;
        p[i]={x,y};
    }
   
    for(ll i=0; i<m; i++){
        if(p[i].first==p[i].second){
            cout<<0<<'\n';
        }
        else if(p[i].first<p[i].second){
            ll ans=frw[p[i].second-1]-frw[p[i].first-1];
            cout<<abs(ans)<<'\n';
        }
        else{
            ll ans=bck[p[i].first-1]-bck[p[i].second-1];
            cout<<abs(ans)<<'\n';

        }
    }





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


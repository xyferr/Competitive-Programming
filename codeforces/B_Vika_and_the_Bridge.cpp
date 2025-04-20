#include<bits/stdc++.h>
#define ll long long


using namespace std;
template <typename T>
void prv(const vector<T>& vec);




void solve() {
    ll n,k; cin>>n>>k;
    vector<ll> v(n);
    for(ll i=0; i<n; i++) cin>>v[i];
    vector<ll> gap(k) , gap2(k);
    vector<ll> lstind(k,-1);
    
    for(ll i=0; i<n; i++){
        ll dis = i - lstind[v[i]-1];
        if(dis > gap[v[i]-1]){
            gap2[v[i]-1]=gap[v[i]-1];
            gap[v[i]-1]=dis;
        }
        else if(dis > gap2[v[i]-1]){
            gap2[v[i]-1]=dis;
        }
        lstind[v[i]-1]=i;
    }
  //  prv(lstind);

    for(ll i=0; i<k; i++){
        ll dis = n - lstind[i];
        if(dis>gap[i]){
            gap2[i]=gap[i];
            gap[i]=dis;
        }
        else if(dis>gap2[i]){
            gap2[i]=dis;
        }
    }

    ll ans = INT_MAX;
    for(ll i=0; i<k; i++){
        ans = min(ans,max((gap[i]+1)/2,gap2[i]));
    }
    cout<<ans-1<<'\n';

    



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


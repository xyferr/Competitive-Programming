#include<bits/stdc++.h>
#define ll long long


using namespace std;
template <typename T>
void prv(const vector<T>& vec);




void solve() {
    ll n,m; cin>>n>>m;
    vector<ll> v(m);
    for(ll i=0; i<m; i++) cin>>v[i];

    sort(v.begin(),v.end());

    vector<ll> gap;
    for(ll i=1; i<m; i++){
        gap.push_back(v[i]-v[i-1]-1);
    }
    gap.push_back((n-v[m-1]+v[0]-1));
    sort(gap.rbegin(),gap.rend());
    ll cnt=1;
    ll ans=m;
    for(ll i=0; i<gap.size(); ++i){
        if(gap[i]>cnt){
            ans+=cnt;
            cnt+=4;
        }
        else if(gap[i]==cnt){
            ans+=cnt-1;
            cnt+=4;
        }
        else{
            ans+=gap[i];
        }
    }
   // prv(gap);
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


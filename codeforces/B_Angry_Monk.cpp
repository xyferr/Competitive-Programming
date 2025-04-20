#include<bits/stdc++.h>
#define ll long long
using namespace std;




void solve() {
    ll n,k; cin>>k>>n;
    vector<ll> v(n);
    for(ll i=0; i<n; i++) cin>>v[i];

    ll ans=0;
    sort(v.begin(),v.end());
    for(int i=0; i<n-1; i++){
        if(v[i]>1){
            ans+=v[i]+v[i]-1;
        }
        else{
            ans++;
        }
    }

    cout<<ans<<endl;






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


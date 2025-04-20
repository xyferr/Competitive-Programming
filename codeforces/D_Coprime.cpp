#include<bits/stdc++.h>
#define ll long long
#define debug(x) cerr << #x << " = " << x << endl
#define debug2(x, y) cerr << #x << " = " << x << ", " << #y << " = " << y << endl


using namespace std;




void solve() {
    ll n; cin>>n;
    
    unordered_map<ll,ll> mp;
    for(ll i=0; i<n; i++){
        ll x; cin>>x;
        mp[x] = i+1;
    } 

    

    
    ll ans = -1;
    for(auto it: mp){
        for(auto ti: mp){
            if(gcd(it.first,ti.first) == 1){
                
                ans = max(ans, it.second + ti.second);
            }   
        }
    }




   

    

    cout<<ans<<'\n';


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


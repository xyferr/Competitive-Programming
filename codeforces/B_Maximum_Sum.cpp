#include<bits/stdc++.h>
#define ll long long
#define debug(x) cerr << #x << " = " << x << endl
#define debug2(x, y) cerr << #x << " = " << x << ", " << #y << " = " << y << endl

using namespace std;

ll mod=1e9+7;


void solve() {
    ll n,k; cin>>n>>k;
    vector<ll> v(n);
    for(ll i=0; i<n; i++) cin>>v[i];

    ll best =0;
    ll cur_sum=0;
    ll pos=0;
    ll tot_sum=0;
    for(ll i=0; i<n ; i++){
        tot_sum+=v[i];
        cur_sum = max(v[i],cur_sum+v[i]);
        if(cur_sum>best){
            pos=i;
            best=cur_sum;
        }
       
        
    }
    ll res = (tot_sum%mod + mod)%mod;
    
    best = best%mod;
    ll inc=1;
    while(k--){
        inc = inc*2%mod;
    }

    res = ( res + best*inc - best + mod)%mod;

    
    
    cout<<res<<'\n';

    // debug2(n,res);








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


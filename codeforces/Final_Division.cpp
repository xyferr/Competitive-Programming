#include<bits/stdc++.h>
#define ll long long
using namespace std;



int fliped_bits(int n){
    int num_bits = sizeof(n) * 8 - __builtin_clz(n);
    int all_ones = (1<<num_bits)-1;
    int result = n^all_ones;
    return result;

}


void solve() {
    ll n; cin>>n;
    vector<ll> v(n);
    for(ll i=0; i<n; i++) cin>>v[i];
    ll N = 2^32-1;
    unordered_map<ll, ll> mp;
    // for(ll i=0; i<n; i++){
    //     mp[v[i]]++;
    // }
    ll count=0;
    // sort(v.begin(), v.end());
    for(int i=0; i<n; i++){
        
        ll required = N^v[i];
  
        if(mp.find(required)==mp.end()){
            count++;
            
        }
        mp[v[i]]++;
    }
    cout<<count<<'\n';








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


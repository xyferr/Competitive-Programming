#include<bits/stdc++.h>
#define ll long long
using namespace std;

bool is_pallindrome(vector<ll> v){
    ll len=v.size();
    for(ll i=0; i< len/2; i++){
        if(v[i]!=v[len-i-1]) return false;
    }
    return true;

}


void solve() {
    ll n; cin>>n;
    vector<ll> v(n);
    for(ll i=0; i<n; i++) cin>>v[i];

    if(is_pallindrome(v)){
        cout<<"0\n";
        return;
    }

    ll ans =0 ;
    for(ll i=0; i<n/2; i++){
        ans = __gcd(ans, abs(v[i] - v[n-i-1]));
        // debug2(ans, abs(v[i] - v[n-i-1]));
    }
    cout<<ans<<"\n";
    




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


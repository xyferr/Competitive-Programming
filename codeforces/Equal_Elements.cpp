#include<bits/stdc++.h>
#define ll long long
using namespace std;




void solve() {
    ll n,p,k; cin>>n>>p>>k;
    ll ans =0 ;
    ll inc = p%k;
    while(inc>0){
        inc--;
        ans +=(n/k);
    }
    ans += (n/p);
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


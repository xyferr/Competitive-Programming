#include<bits/stdc++.h>
#define ll long long
using namespace std;


double logg(ll x, ll base) {
    return log(x) / log(base);
}


void solve() {
    ll k,l1,r1,l2,r2; cin>>k>>l1>>r1>>l2>>r2;

    ll res = 0;
    for(ll i=l1; i<=r1; i++){   
        double ni = logg(l2,k)-logg(i,k);
        double nf = logg(r2,k)-logg(i,k);
        cout<<ceil(nf)<<" "<<floor(ni)<<endl;
        
        
    }



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


#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll mx = 2*1e5;
vector<ll> v(mx);


void solve() {
    ll n; cin>>n;
    cout<<v[n]<<'\n';

}

ll dig_sum(ll n){
    ll sum=0;
    while(n){
        sum+=n%10;
        n/=10;
    }
    return sum;
}




int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    for(ll i=1; i<=mx; i++){
        if(i==1) v[i]=dig_sum(i);
        else v[i]=v[i-1]+ dig_sum(i);
    }
    
    int T = 1; cin >> T;
    while(T--) {
        solve();
    }
    return 0;
}


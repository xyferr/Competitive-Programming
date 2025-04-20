#include<bits/stdc++.h>
#define ll long long
using namespace std;




void solve() {
    ll n,k; cin>>n>>k;

    ll x = n;
    ll pos=1;
    while(x>0){
        ll cur = x - x/2;
        if(k<=cur){
            cout<<pos*((2*k)-1)<<'\n';
            return;
        }
        pos*=2;
        k-=cur;
        x/=2;
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


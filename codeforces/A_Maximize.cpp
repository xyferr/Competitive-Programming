#include<bits/stdc++.h>
#define ll long long
using namespace std;

bool is_prime(ll n){
    if(n==1) return false;
    for(ll i=2; i*i<=n; i++){
        if(n%i==0) return false;
    }
    return true;
}


void solve() {
    ll x; cin>>x;
    if(is_prime(x)){
        cout<<x-1<<endl;
        return;
    }
    if(x&1){
        int ans = x-1;
        while(ans>1){
            if(gcd(ans , x)>1){
                break;
            }
            ans--;
        }
        cout<<ans<<endl;
    }
    else{
        cout<<x/2<<endl;
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


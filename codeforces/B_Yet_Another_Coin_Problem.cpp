#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define debug(x) cerr << #x << " = " << x << endl
#define debug2(x, y) cerr << #x << " = " << x << ", " << #y << " = " << y << endl

vector<ll> res = {0, 1, 2, 1, 2, 3, 1, 2, 3, 2,3,2,2,2,3,3};


void solve() {
    ll n; cin>>n;
    if(n%15==0 && n>=15) {
        ll ans = n/15;
        // cout<<ans<<'\n';
        debug2(n,ans);
        
    }
    else if(n>15){
        ll ans = (n-10)/15;
        ll rem = (n-10)%15;
        if(rem>=10) {
            ans++;
            rem = rem%10;
            ans = ans + res[rem];
        }
        else{
            ans = n/15;
            rem = n%15;
            ans = ans + res[rem];
        }
        // cout<<ans<<'\n';
        debug2(n,ans);

    }
    else {
        // cout<<res[n]<<'\n';
        debug2(n,res[n]);
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


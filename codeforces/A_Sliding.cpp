#include<bits/stdc++.h>
#define ll long long
using namespace std;




void solve() {
    ll n,m,r,c; cin>>n>>m>>r>>c;
    ll i = m*(r-1)+c;
    ll ans=0;
    
    ll row_change = n-r;
    ll row_inc=(n-r)*m;
    ans+=(n*m)-i+(row_inc-(n-r));
    

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


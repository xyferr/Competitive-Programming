#include<bits/stdc++.h>
#define ll long long
using namespace std;




void solve() {
    ll n,l,r; cin>>n>>l>>r;
    bool flag = true;
    vector<ll> ans(n);
    for(ll i=1; i<=n; i++){
        ans[i-1] = ((l-1)/i + 1)*i;
        if(ans[i-1] > r) {
            flag = false;
            break;
        }
    }
    if(flag){
        cout<<"YES\n";
        for(ll i=1; i<=n; i++){
            cout<<ans[i-1]<<" ";
        }
        cout<<'\n';
    }
    else{
        cout<<"NO\n";
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


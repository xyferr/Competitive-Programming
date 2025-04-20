#include<bits/stdc++.h>
#define ll long long
using namespace std;




void solve() {
    ll n,k; cin>>n>>k;
    ll res = 0;
    res+= (n*(n+1)/2)-((n-k)*(n-k+1)/2);
    if(res&1) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;




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


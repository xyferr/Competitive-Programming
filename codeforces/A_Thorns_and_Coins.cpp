#include<bits/stdc++.h>
#define ll long long
using namespace std;




void solve() {
    ll n; cin>>n;
    string s; cin>>s;

    ll ans=0;

    for(ll i=0; i<n; i++){
        if(s[i]=='@') ans++;
        if(s[i]=='*' && s[i+1]=='*') break;
    }

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


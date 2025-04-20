#include<bits/stdc++.h>
#define ll long long
using namespace std;




void solve() {
    // ll n; cin>>n;
    string s; cin>>s;
    ll ans =0;
    int cur = 0;
    for(ll i=0; i<s.size(); i++){
        if(s[i]=='1'){
            cur++;

        }
        else{
            if(cur>0)
            ans+=(cur+1);
        }
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


#include<bits/stdc++.h>
#define ll long long
using namespace std;




void solve() {
    ll n; cin>>n;
    string s; cin>>s;
    for(ll i=1; i<=n/2; i++){
        if(n%(i)==0){
            for(ll j=0; j<n; j+=i){
                string a = s.substr(j,i);
                
            }
        }
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


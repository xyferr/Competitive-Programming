#include<bits/stdc++.h>
#define ll long long
using namespace std;




void solve() {
    ll n; cin>>n;
    string s; cin>>s;
    for(ll i=1; i<n; i++) {
        if(s[i]!=s[i-1]) {
            cout<<1<<endl;
            return;

        }
    }
    cout<<s.size()<<endl;




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


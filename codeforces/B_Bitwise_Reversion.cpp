#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;

void solve() {
    ll x,y,z; cin>>x>>y>>z;
    while(x>0 || y>0 || z>0){
        ll count_set = 0;
        if(x&1) count_set++;
        if(y&1) count_set++;
        if(z&1) count_set++;
        if(count_set==2) {
            cout<<"NO"<<endl;
            return;
        }
        x>>=1; y>>=1; z>>=1;
    }
    cout<<"YES"<<endl;
    









}













int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int T = 1;
    cin >> T;
    while (T--) {
        
        solve();
    }
    return 0;
}
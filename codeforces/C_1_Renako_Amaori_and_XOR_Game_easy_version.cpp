#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;

void solve() {
    ll n; cin >> n;
    vector<ll> a(n),b(n);
    ll cnt_a=0,cnt_b=0;
    for (ll i = 0; i < n; ++i) {
        cin >> a[i];
        if(a[i]) cnt_a++;
    }
    for (ll i = 0; i < n; ++i) {
        cin >> b[i];
        if(b[i]) cnt_b++;
    }

    if((cnt_a+cnt_b)%2==0){
        cout<<"Tie"<<endl;
        return;
    }
    for(int i=n-1; i>=0; i--){
        if(a[i]^b[i] && (i+1)&1){
            cout<<"Ajisai"<<endl;
            return;
        }
        else if(a[i]^b[i] && !((i+1)&1)){
            cout<<"Mai"<<endl;
            return;
        }
    }

    








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
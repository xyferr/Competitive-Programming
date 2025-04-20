#include<bits/stdc++.h>
#define ll long long
using namespace std;




void solve() {
    ll n; cin>>n;
    vector<ll> v(n);
    for(ll i=0; i<n; i++) cin>>v[i];
    if(n<2) {
        cout<<"NO"<<endl;
        return;
    }

    bool flag = false;

    // sort(v.begin(), v.end());
    for(ll i=0; i<n; i++) {
        if(i==0){
            if(v[i+1]+v[i+1]>v[i] && v[i]+v[i]>v[i+1] && v[i]+v[i+1]>v[i+1]) {
                cout<<"YES"<<endl;
                return;
            }
        }
        if(i==n-1) {
            if(v[i-1]+v[i-1]>v[i] && v[i]+v[i]>v[i-1] && v[i]+v[i-1]>v[i-1]) {
                cout<<"YES"<<endl;
                return;
            }
        }
        if(i>0 && i<n-1) {
            if(v[i-1]+v[i-1]>v[i] && v[i]+v[i]>v[i-1] && v[i]+v[i-1]>v[i-1]) {
                cout<<"YES"<<endl;
                return;
            }
            if(v[i+1]+v[i+1]>v[i] && v[i]+v[i]>v[i+1] && v[i]+v[i+1]>v[i+1]) {
                cout<<"YES"<<endl;
                return;
            }
        }
    }
    cout<<"NO"<<endl;




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


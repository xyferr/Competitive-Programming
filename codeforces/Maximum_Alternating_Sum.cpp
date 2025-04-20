#include<bits/stdc++.h>
#define ll long long
using namespace std;




void solve() {
    ll n; cin>>n;
    vector<ll> v(n);
    for(ll i=0; i<n; i++) cin>>v[i];
    sort(v.begin(), v.end());
    ll ans =0;
    int i=0, j=n-1;
    while(i<=j){
        if(i==j){
            ans += v[j];
            break;
        }
        ans += v[j];
        ans -= v[i];
        i++;
        j--;
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


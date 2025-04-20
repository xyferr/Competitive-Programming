#include<bits/stdc++.h>
#define ll long long
using namespace std;




void solve() {
    ll n,k; cin>>n>>k;
    vector<ll> v(n);
    for(ll i=0; i<n; i++) cin>>v[i];
    sort(v.begin(), v.end());
    if(v[n-1]>=k){
        cout<<0<<endl;
        return;
    }
    ll sum=0;
    for(int i=n-1; i>=0; i--){
        sum+=v[i];
        if(sum==k){
            cout<<0<<endl;
            return;
        }
        else if(sum>k){
            sum-=v[i];
            cout<<k-sum<<endl;
            return;
        }
    }
    cout<<k-sum<<endl;





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


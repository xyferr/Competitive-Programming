#include<bits/stdc++.h>
#define ll long long
using namespace std;




void solve() {
    ll n,s; cin>>n>>s;
    vector<ll> v(n);
    bool flag=true;
    for(ll i=0; i<n; i++) {
        ll x; cin>>x;
        if(x<=s) flag=false;
        v[i]=x;
    }
    if(flag){
        cout<<0<<endl;
        return;
    }
    vector<ll> pref(n);
    pref[0]=v[0];
    for(ll i=1; i<n; i++) pref[i]=pref[i-1]+v[i];
    // if(pref[n-1]>s){
    //     cout<<0<<'\n';
    //     return;
    // }
    int max_frequency=0;
    int i=0; int j=0;
    while(j<n){
        if(pref[j+1]-pref[i]<=s){
            j++;
        }
        else if(pref[j+1]-pref[i]>s){
            i++;
        }
        max_frequency=max(max_frequency,j-i);
    }
    cout<<max_frequency<<'\n';




}






int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int T = 1; 
    // cin >> T;
    while(T--) {
        solve();
    }
    return 0;
}


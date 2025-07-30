#include<bits/stdc++.h>
#define ll long long
#define endl "\n"   
using namespace std;




void solve() {
    ll n,k; cin>>n>>k;
    vector<pair<ll,ll>> v(n);
    for(ll i=0; i<n; i++) {
        cin>>v[i].first;
        v[i].second = i;
    }
    
    
    sort(v.begin(), v.end());
    ll water=1;
    ll ind = 0;
    for(ll i=0; i<n; i++) {
        
        if(v[i].second ==k-1) {
            ind = i;
            break;
        }
    }
    // cerr<<ind<<endl;
    if(ind==n-1) {
        cout<<"YES"<<endl;
        return;
    }
    water += v[ind+1].first - v[ind].first;
    if(v[ind].first<water-1) {
        cout<<"NO"<<endl;
        return;
    }
    
    bool flag = true;
    for(ll i=ind+1; i<n-1; i++) {
        // if(i==ind) water = 1;
        water += v[i+1].first - v[i].first;
        // cerr<<water<<" "<<v[i].first<<endl;
        if(v[i].first<water-1){
            // cout<<"NO"<<endl;
            flag = false;
            break;
            
            // return;
        }
        // water += v[i+1].first - v[i].first;
    }
    // cerr<<endl;
    if(flag)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;



}






int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int T = 1; 
    cin >> T;
    while(T--) {
        solve();
    }
    return 0;
}


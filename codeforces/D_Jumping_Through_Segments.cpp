#include<bits/stdc++.h>
#define ll long long
#define endl "\n"   
using namespace std;

bool part(vector<pair<ll,ll>> &v, ll k){
    ll n = v.size();
    ll init = 0;
    ll left = 0;
    ll right = 0;
    for(ll i=0; i<n; i++){
        left = max(left-k,v[i].first);
        right = min(right+k,v[i].second);
        if(left>right){
            return false;
        }
    }
    // cerr<<endl;
    return true;
}


void solve() {
    ll n; cin>>n;
    vector<pair<ll,ll>> v(n);
    for(ll i=0; i<n; i++){ll x,y; cin>>x>>y; v[i] = {x,y};}
    ll low = 0 , high = 1e9+1;
    while(low <= high){
        ll mid = low+(high-low)/2;
        if(part(v, mid)){
            high = mid-1;
        }
        else{
            low = mid+1;
        }
    }
    cout << low << endl;




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


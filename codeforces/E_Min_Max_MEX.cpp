#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll mex(vector<ll> &v) {
    ll n = v.size();
    vector<bool> present(n + 1, false);
    for (ll i = 0; i < n; i++) {
        if (v[i] <= n) {
            present[v[i]] = true;
        }
    }
    for (ll i = 0; i <= n; i++) {
        if (!present[i]) return i;
    }
    return n + 1;
}

bool partition(vector<ll> &v, ll k,ll x) {
    if(x==0) return true;
    ll segments = 0 , n = v.size() , cnt = 0;
    vector<ll> freq(n+1,0);
    for(int i=0; i<n; i++){
        if(v[i]<x){
            if(freq[v[i]]==0){
                cnt++;
            }
            freq[v[i]]++; 
        }
        if(cnt ==x){
            segments++;
            cnt = 0;
            freq.assign(n+1,0);
        }
    }
    return segments>=k;
}


void solve() {
    ll n,k; cin>>n>>k;
    vector<ll> v(n);
    for(ll i=0; i<n; i++) cin>>v[i];
    ll cur = mex(v);

    ll low = 0, high = cur , ans = 0;

    while(low<=high){
        ll mid = (low+high)/2;

        if(partition(v, k, mid)){
            ans = mid;
            low = mid+1;
        }
        else{
            high = mid-1;
        }
    }
    cout<<ans<<endl;





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


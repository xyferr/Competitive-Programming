#include<bits/stdc++.h>
#define ll long long
using namespace std;




void solve() {
    ll n,q; cin>>n>>q;
    vector<ll> v(n);
    for(ll i=0; i<n; i++) cin>>v[i];
    vector<pair<ll,ll>> qr(q);
    for(ll i=0; i<q; i++){
        ll x,y; cin>>x>>y;
        x--; y--;
        qr[i] = {x,y};
    }
    vector<ll> ind(q);
    iota(ind.begin(), ind.end(), 0);

    sort(ind.begin(), ind.end(), [&](ll a, ll b) {
        return qr[a] < qr[b]; // Sort the indices based on the sorted qr vector
    });

    sort(qr.begin(),qr.end());
    vector<string> ans(q);
    map<ll,ll> mp;
    for(ll i=0; i<n; i++){
        mp[v[i]]++;
    }
    for(ll i=0; i<q; i++){
        ll maxo = 0;
        if(i==0){
            for(ll j=qr[i].first; j<=qr[i].second; j++){
                mp[v[j]]++;
            }
            
            for(auto it:mp){
                maxo = max(maxo,it.second);
            
            }
            if(maxo>((qr[i].second-qr[i].first+1)/2)) {
                ans[ind[i]] = "NO";
            }
            else ans[ind[i]] = "YES";
        }
        else if(qr[i].first==qr[i-1].first){
            for(ll j=qr[i-1].second+1; j<=qr[i].second; j++){
                mp[v[j]]++;
                maxo = max(maxo,mp[v[j]]);
            }
            
            if(maxo>((qr[i].second-qr[i].first+1)/2)) {
                ans[ind[i]] = "NO";
            }
            else ans[ind[i]] = "YES";
        }
        else{
            for(ll j=qr[i-1].first; j<qr[i].first; j++){
                mp[v[j]]--;
                if(mp[v[j]]==0) mp.erase(v[j]);
            }
            maxo = -1;
            if(qr[i].second>qr[i-1].second){
                for(ll j=qr[i-1].second+1; j<=qr[i].second; j++){
                    mp[v[j]]++;
                }
            }
            else{
                for(ll j=qr[i-1].second; j>qr[i].second; j--){
                    mp[v[j]]--;
                    if(mp[v[j]]==0) mp.erase(v[j]);
                }
            }
            
            for(auto it:mp){
                maxo = max(maxo,it.second);
            
            }
            if(maxo>((qr[i].second-qr[i].first+1)/2)) {
                ans[ind[i]] = "NO";
            }
            else ans[ind[i]] = "YES";
        }
        
    }
    for(auto it:ans){
        cout<<it<<'\n';
    }
    cout<<'\n';
   




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


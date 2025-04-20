#include<bits/stdc++.h>
#define ll long long
using namespace std;




void solve() {
    ll n; cin>>n;
    vector<ll> v(n);
    unordered_map<ll,ll>mp;
    set<ll> s;
    for(ll i=1; i<=n; i++){
        s.insert(i);
    }

    for(ll i=0; i<n; i++) {
        cin>>v[i];
        if(i==0 || mp[v[i]]==0){
            // cout<<v[i]<<"-";
            s.erase(v[i]);
        }
        mp[v[i]]++;

    }
    unordered_map<ll,ll> freq;

    vector<ll> res(n);

    res[0] = v[0];
    freq[v[0]]++;
    for(ll i=1; i<n; i++){
        if(freq[v[i]]==0){
            res[i] = v[i];
        }
        else{
            res[i] = *s.begin();
            s.erase(s.begin());
        }
        freq[res[i]]++;
    }
    for(auto x: res){
        cout<<x<<" ";
    }
    cout<<endl;
    
   





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


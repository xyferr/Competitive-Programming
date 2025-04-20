#include<bits/stdc++.h>
#define ll long long
using namespace std;





void solve() {
    ll n; cin>>n;
    vector<ll> v(n);
    for(ll i=0; i<n; i++) cin>>v[i];

    vector<ll> duplicate = v;
    sort(duplicate.begin(),duplicate.end());
    vector<ll> ans;
    for(ll i=0; i<n; i++){
        if(duplicate[i]!=v[i]){
            ans.push_back(v[i]);
        }
    }
    ll res = ans[0];
    for(ll i=1; i<ans.size(); i++){
        res = res & ans[i];
    }
    cout<<res<<'\n';


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


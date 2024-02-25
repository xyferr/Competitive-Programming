#include<bits/stdc++.h>
#define ll long long
#define endl '\n'

using namespace std;
void prv(vector<ll>&vec);


void solve() {
    ll n; cin>>n;
    vector<pair<ll,ll>> v(n);
    vector<ll> prefsum(n);
    for(ll i=0; i<n; i++) {
        ll x; cin>>x;
        v[i] = {x, i};
        //cout<<v[i].first<<"-"<<v[i].second<<" ";
        if(i==0) prefsum[i] = x;
        else prefsum[i] = prefsum[i-1] + x;
    }
    vector<ll> ans(n);
    sort(v.begin(), v.end());
    for(ll i=0; i<n; i++) {
        if(i==0) prefsum[i] = v[i].first;
        else prefsum[i] = prefsum[i-1] + v[i].first;
    }
    ans[v[n-1].second] = n-1;
    //cout<<v[n-1].first<<"-"<<v[n-1].second<<" ";
    for(ll i=n-2; i>=0; --i){
        if(prefsum[i]<v[i+1].first) ans[v[i].second] = i;
        else ans[v[i].second] = ans[v[i+1].second];
    }
    prv(ans);
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

void prv(vector<ll>&vec){
    for(auto it: vec){
        cout<<it<<" ";
    }
    cout<<endl;
}
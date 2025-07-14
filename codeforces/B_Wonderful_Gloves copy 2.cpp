#include<bits/stdc++.h>
#define ll long long
using namespace std;




void solve() {
    ll n,k; cin>>n>>k;
    vector<int> l(n),r(n);
    for(ll i=0; i<n; i++) cin>>l[i];
    for(ll i=0; i<n; i++) cin>>r[i];

    vector<pair<int, int>> maxlr(n);
    for(ll i=0; i<n; i++){
        maxlr[i]=make_pair(max(l[i],r[i]),i);
    }
    sort(maxlr.begin(),maxlr.end());
    ll res = 0;
    for(ll i=0; i<n; i++){
        ll cur_sum = l[maxlr[i].second] + r[maxlr[i].second];
        if(k>=(cur_sum-maxlr[i].first)){
            res += maxlr[i].first + (cur_sum-maxlr[i].first);
            k -= (cur_sum-maxlr[i].first);
        }
        else{
            res += maxlr[i].first + k;
            break;
        }
    }
    cout<<res<<endl;





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


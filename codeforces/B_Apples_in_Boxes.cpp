#include<bits/stdc++.h>
#define ll long long
#define endl "\n"   
using namespace std;




void solve() {
    ll n,k; cin>>n>>k;
    vector<ll> v(n);
    for(ll i=0; i<n; i++) cin>>v[i];

    ll max_el = *max_element(v.begin(), v.end());
    ll min_el = *min_element(v.begin(), v.end());
    unordered_map<ll,ll> m;
    for(ll i=0; i<n; i++){
        m[v[i]]++;
    }
    if(m[max_el]>1){
        if(max_el-min_el > k){
            cout<<"Jerry"<<endl;
            return;
        }
        
    }
    else{
        if(max_el-1-min_el > k){
            cout<<"Jerry"<<endl;
            return;
        }
        
    }
    ll sum_el = accumulate(v.begin(), v.end(), 0);
    if(sum_el&1){
        cout<<"Tom"<<endl;
    }
    else{
        cout<<"Jerry"<<endl;
    }




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


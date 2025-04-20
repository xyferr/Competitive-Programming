#include<bits/stdc++.h>
#define ll long long
using namespace std;




void solve() {
    ll n,k; cin>>n>>k;
    unordered_map<int,int>mp;
    for(ll i=0; i<k; i++){
        int b,c; cin>>b>>c;
        mp[b]+=c;
    }
    vector<int>v;
    for(auto it:mp){
        v.push_back(it.second);
    }
    sort(v.rbegin(),v.rend());
    int sum=0;
    for(int i=0; i<min(n,(ll)v.size()); i++){
        sum+=v[i];
    }
    cout<<sum<<endl;




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


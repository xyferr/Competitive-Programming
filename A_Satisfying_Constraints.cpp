#include<bits/stdc++.h>
#define ll long long


using namespace std;


/// rohitttt



void solve() {
    ll n; cin>>n;
    ll up = INT_MAX , low =0;
    set<ll>s; 
    for(ll i=0; i<n; i++){
        ll x,y; cin>>x>>y;
        if(x==1){
            low= max(low,y);
        }
        else if(x==2){
            up = min(up,y);
        }
        else{
            s.insert(y);
        }
    }
    ll ct=0; 
    for(auto x: s){
        if(x>=low && x<=up){
            ct++;
        }
    }
    ll res = (up-low+1) - ct;
    if(res<0){
        res=0;
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


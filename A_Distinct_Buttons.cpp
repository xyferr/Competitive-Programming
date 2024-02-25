#include<bits/stdc++.h>
#define ll long long


using namespace std;
void prv(vector<ll>&vec);




void solve() {
    ll n; cin>>n;
    vector<pair<ll,ll>> v(n);
    bool q1=0,q2=0,q3=0,q4=0;
    for(ll i=0; i<n; i++){
        ll x,y; cin>>x>>y;
        if(x<0) q4=1;
        else if(x>0) q2=1;
        if(y<0) q3=1;
        else if(y>0) q1=1;
        v[i]={x,y};
    }
    if(q1&&q2&&q3&&q4){
        cout<<"NO\n";
        return;
    }
    cout<<"YES\n";
    



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
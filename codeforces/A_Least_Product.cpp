#include<bits/stdc++.h>
#define ll long long


using namespace std;
void prv(vector<ll>&vec);




void solve() {
    ll n; cin>>n;
    vector<ll> v(n);
    ll nct=0; ll zct=0;
    for(ll i=0; i<n; i++) {
        cin>>v[i];
        if(v[i]<0) nct++;
        if(v[i]==0) zct++;
    }
    if(zct>0){
        cout<<0<<"\n";
        return;
    }
    if(nct==0){
        cout<<1<<"\n";
        cout<<1<<" "<<"0"<<"\n";
    }
    else if(nct&1) cout<<"0"<<"\n";
    else if(!(nct&1)){
        cout<<1<<"\n";
        cout<<1<<" "<<"0"<<"\n";
    }
        




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
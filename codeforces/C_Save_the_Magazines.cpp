#include<bits/stdc++.h>
#define ll long long
#define endl '\n'

using namespace std;
void prv(vector<ll>&vec);




void solve() {
    ll n; cin>>n;
    string s; cin>>s;
    vector<ll> v(n);
    for(ll i=0; i<n; i++) cin>>v[i];

    
    ll ans=0;
    for(ll i=0,j=-1; i<n; i++){
        if(s[i]=='0'){
            j=i;
        }
        else if(j>=0 && v[i]<v[j]){
            swap(s[i],s[j]);
            j=i;
        }
    }
    for(ll i=0; i<n; i++){
        if(s[i]=='1'){
            ans+=v[i];
        }
    }
    cout<<ans<<endl;
    




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
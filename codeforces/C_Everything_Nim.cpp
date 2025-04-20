#include<bits/stdc++.h>
#define ll long long
using namespace std;




void solve() {
    ll n; cin>>n;
    vector<ll> v(n);
    for(ll i=0; i<n; i++) cin>>v[i];
    sort(v.begin(),v.end());
    //remove duplicates
    v.erase(unique(v.begin(),v.end()),v.end());
    n = v.size();
    int ssum=0;
    if(n==1){
        cout<<"Alice"<<endl;
        return;
    }
    if(n&1){
        cout<<"Alice"<<endl;
        

    }
    else{
        for(int i=0; i+1<n; i+=2){
            if(v[i]-ssum>1){
                cout<<"Alice"<<endl;
                return;
            }
            ssum+=v[i]+v[i+1];
        }
        cout<<"Bob"<<endl;

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


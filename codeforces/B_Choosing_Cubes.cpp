#include<bits/stdc++.h>
#define ll long long
using namespace std;




void solve() {
    ll n,f,k; cin>>n>>f>>k;
    vector<ll> v(n);
    for(ll i=0; i<n; i++) cin>>v[i];
    int c = v[f-1]; // [f-1] because 1 based indexing
    bool flag = false;
    sort(v.rbegin(),v.rend());
    for(int i=0; i<k; i++){
        if(v[i]==c){
            flag = true;
            break;
        }
    }
    if(k==n){
        cout<<"YES"<<endl;
        return;
    }
    if(flag){
        if(v[k]==c){
            cout<<"MAYBE"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
    else{
        cout<<"NO"<<endl;
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


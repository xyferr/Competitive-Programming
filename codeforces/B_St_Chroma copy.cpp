#include<bits/stdc++.h>
#define ll long long
using namespace std;




void solve() {
    ll n,x; cin>>n>>x;
    if(n==1){
        cout<<0<<endl;
        return;
    }
    for(ll i=0; i<n; i++){
        if(i!=x) cout<<i<<" ";
    }
    if(x!=(n)) cout<<x<<endl;
    else{
        cout<<endl;
    }
    // cout<<endl;
    




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


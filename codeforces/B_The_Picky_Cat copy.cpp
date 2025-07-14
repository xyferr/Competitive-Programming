#include<bits/stdc++.h>
#define ll long long
#define endl "\n"   
using namespace std;




void solve() {
    ll n; cin>>n;
    vector<ll> v(n);
    for(ll i=0; i<n; i++) {
        cin>>v[i];
        v[i]=abs(v[i]);
    }
    ll greater_el=-1;
    for(auto it:v){
        if(it>=v[0]){
            greater_el++;
        }
    }
    ll smaller_el= n-greater_el-1;
    if(greater_el>=(n/2)){
        cout<<"YES"<<endl;
    }
    else if(smaller_el>(n/2)){
        cout<<"NO"<<endl;
    }else{
        cout<<"YES"<<endl;
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


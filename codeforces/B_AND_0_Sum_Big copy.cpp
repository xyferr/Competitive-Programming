#include<bits/stdc++.h>
#define ll long long
#define endl "\n"   
using namespace std;


ll mod = 1e9+7;

void solve() {
    ll n,k; cin>>n>>k;
    ll inc =k-1;
    ll res=n;
    while(inc>0){
        res = res*n;
        res = res%mod;
        inc--;
    }
    cout<<res<<endl;





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


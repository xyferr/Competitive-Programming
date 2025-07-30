#include<bits/stdc++.h>
#define ll long long
#define endl "\n"   
using namespace std;




void solve() {
    ll n,k; cin>>n>>k;
    vector<ll> v(n);
    for(ll i=0; i<n; i++) cin>>v[i];
    ll res=0;
    ll cur=0;
    for(int i=0; i<n; i++){
        if(v[i]) cur=0;
        else{
            cur++;
            if(cur==k){
                i++;
                res++;
                cur=0;  
            }
        }
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


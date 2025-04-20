#include<bits/stdc++.h>
#define ll long long
using namespace std;




void solve() {
    ll n; cin>>n;
    ll res=0;
    for(ll i=1; i*i<=n; i++){
        if(n%i==0){
            if(i*i==n){
                res++;
            }else{
                res+=2;
            }
        }
    }
    
    cout<<res<<endl;




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


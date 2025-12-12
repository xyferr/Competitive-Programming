#include<bits/stdc++.h>
#define ll long long
#define endl "\n"   
using namespace std;




void solve() {
    ll n,k; cin>>n>>k;
    vector<ll> v(n);
    for(ll i=0; i<n; i++) cin>>v[i];
    ll res=0;
    ll win = 1;

    for(int i=1; i<n; i++){
        if(2*v[i]>v[i-1]){
            win++;
            if(win==k+1){
                win--;
                res++;
            }
        }
        else{
            win=1;
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


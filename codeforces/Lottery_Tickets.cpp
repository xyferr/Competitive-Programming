#include<bits/stdc++.h>
#define ll long long
using namespace std;




void solve() {
    ll n; cin>>n;
    vector<ll> v(n);
    for(ll i=0; i<n; i++) cin>>v[i];
    ll chef = v[0];
    sort(v.begin(), v.end());
    ll prev = -1;
    ll nxt =-1;
    for(ll i=0; i<n; i++){
        if(v[i]==chef){
            if ((i-1)>=0){
                prev = v[i-1];
            }
            if ((i+1)<n){
                nxt = v[i+1];
            }
            break;
        }
    }
    ll res = 0;
    if (prev!=-1){
        ll mid = (prev+chef)/2;
        if((prev+chef)%2!=0){
            mid++;
        }
        // cerr<<mid<<"-"<<res<<endl;  
        res += (chef-mid);
    }
    else{
        res += (chef-1);
    }
    if (nxt!=-1){
        ll mid = (nxt+chef)/2;
     
        
        res += (mid-chef);
    }
    else{
        res += (1000000-chef);

    }
    res++;
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


#include<bits/stdc++.h>
#define ll long long
using namespace std;




void solve() {
    ll n,k,d; cin>>n>>k>>d;

    ll res = 0;
    vector<ll> time(n);
    for(int i=0; i<n; i++){
        cin>>time[i];
    }
    sort(time.begin(),time.end());
    ll plucked = n;
    for(auto it:time){
        
        if(plucked==k) break;
        if(it<=d){
            res += ceil(d/(float)it);
            // cerr<<it<<" "<<res<<endl;
            plucked--;
        }
        else{
            res++;
            plucked--;
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


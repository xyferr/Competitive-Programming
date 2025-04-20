#include<bits/stdc++.h>
#define ll long long
using namespace std;




void solve() {
    ll m,a,b,c; cin>>m>>a>>b>>c;
    ll res = 0;
    res +=min(m,a);
    res+=min(m,b);
    // cerr<<res<<endl;
    ll taken=0;
    if(m>a){
        res+=min(m-a,c);
        taken = min(m-a,c);
    }
    // cerr<<res<<endl;
    if(m>b){
        res+=min(m-b,c-taken);
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


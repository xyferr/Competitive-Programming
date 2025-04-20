#include<bits/stdc++.h>
#define ll long long
using namespace std;




void solve() {
    ll n,m; cin>>n>>m;
    string s,t; cin>>s>>t;
    if(s[0]!=t[0]) {
        cout<<-1<<endl;
        return;
    }
    if(s==t) {
        cout<<0<<endl;
        return;
    }
    if(m!=n){
        int less = min(n,m);
        less--;
        if(s[less]==t[less]){
            cout<<1<<endl;
        }
        else{
            cout<<2<<endl;
        }
      
    }
    else{
        cout<<2<<endl;
    }
    /*
    abcd
    bbcd
    
    */




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


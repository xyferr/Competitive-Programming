#include<bits/stdc++.h>
#define ll long long
using namespace std;




void solve() {
    string s; cin>>s;
    ll a=0 , b=0;

    for(ll i=0; i<5; i++){
        if(s[i]=='A') a++;
        else b++;
    }
    if(a>b) cout<<"A"<<'\n';
    else if(b>a) cout<<"B"<<'\n';
 



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


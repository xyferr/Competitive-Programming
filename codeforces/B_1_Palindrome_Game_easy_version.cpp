#include<bits/stdc++.h>
#define ll long long
using namespace std;




void solve() {
    ll n; cin>>n;
    string s; cin>>s;

    ll zero_count=0;

    for(ll i=0; i<n; i++){
        if(s[i]=='0') zero_count++;
    }

    if(zero_count==0){
        cout<<"DRAW\n";
        return;
    }
    if(zero_count==1){
        cout<<"BOB\n";
        return;
    }
    if(!(zero_count&1)){
        cout<<"BOB\n";
        return;
    }
    cout<<"ALICE\n";
    return;




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


#include<bits/stdc++.h>
#define ll long long
using namespace std;




void solve() {
    ll n; cin>>n;
    string s; cin>>s;
    ll cnt=0;
    for(auto i:s){
        if(i=='1'){
            cnt++;
        }
    }
    ll res = 0;
    for(auto it:s){
        if(it=='1'){
            res+=(cnt-1);
        }
        else{
            res+=cnt+1;
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


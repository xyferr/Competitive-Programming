#include<bits/stdc++.h>
#define ll long long
using namespace std;




void solve() {
    ll n; cin>>n;
    string s; cin>>s;
    ll res=0;
    if (n&1){
        res++;
    }
    ll ind = 0;
    // cout<<s<<endl;
    ll last=0;
    while(ind<n/2){
        if(s[ind]=='0' && s[n-1-ind]=='0'){
            break;

        }else if(s[ind]=='1' && s[n-1-ind]=='1'){
            break;
        }
        
        ind++;
    }
    for(ll i=ind; i<n/2; i++){
        res+=2;
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


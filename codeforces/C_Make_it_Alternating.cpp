#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll mod = 998244353;

ll factorial(ll n){
    ll fact = 1;
    for(ll i=1; i<=n; i++){
        fact = (fact*i)%mod;
    }
    return fact;
}

void solve() {
    string s; cin>>s;
    ll n = s.size();
    ll op = 1;
    ll consecutive = 0;
    bool flag = true;
    ll seq = 1;
    ll res = 1;
    for(ll i=1; i<n; i++){
        
        if(s[i]==s[i-1]){
            if(flag) consecutive++;
            flag=false;
            consecutive++;
        }else{
            if(consecutive>0){
                res = res*consecutive;
                res = res%mod;
            }  
            consecutive=0;
            // res = res * factorial(consecutive);
            // res = res%mod;
            // consecutive=0;
            op++;
            flag=true;

        }

    }
    
    if(consecutive>0){
        res = res*consecutive;
        res = res%mod;
    }

    op=n-op;
    res=res*factorial(op);
    res=res%mod;
    res=max(1LL,res);
    cout<<op<<" "<<res<<endl;
    







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









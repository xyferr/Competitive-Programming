#include<bits/stdc++.h>
#define ll long long
using namespace std;




void solve() {
    string s; cin>>s;
    ll len = s.size();
    ll z_ind = -1;
    for(ll i=0; i<len; i++){
        if(s[i]=='0') {
            z_ind = i ;
            break;
        }
    }
    if(z_ind!=-1){
        string dusra;
        for(ll i=z_ind; i<len; i++){
            dusra += s[i];
        }
        for(ll i =0; i<z_ind; i++){
            dusra += s[i];
        }
        s = dusra;
            ll max_con = 0;
        ll cur=0;
        for(ll i=0;i<s.size(); i++){
            if(s[i]=='1') cur++;
            else cur=0;
            
            max_con = max(max_con , cur);
        }   
        ll res;
        if(max_con==1){
            res=1;
        }
        else if(max_con<1){
            res=0;
        }
        else{
            if(max_con%2==0) res = max_con/2, res = res*(res+1);
            else res = (max_con+1)/2 , res = res*res;

        }
        // if(res<0) res=0;
        cout<<res<<'\n';
    }
    else{
        ll res = len*len;
        cout<<res<<'\n';
    }



    




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


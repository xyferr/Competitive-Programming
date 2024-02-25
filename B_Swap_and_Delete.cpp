#include<bits/stdc++.h>
#define ll long long


using namespace std;
void prv(vector<ll>&vec);




void solve() {
    string s; cin>>s;
    ll ct1=0,ct0=0;
    for(auto it:s){
        if(it=='1'){
            ct1++;
        }
        else ct0++;
    }
    if(ct1==ct0){
        cout<<0<<"\n";
        return;
    }
    else if(ct1==0 || ct0==0){
        cout<<s.length()<<'\n';
    }
    else{
        string t; 
        for(ll i=0; i<s.length();i++){
            if(s[i]=='1'){
                if(ct0>0){
                    t+='0';
                    --ct0;
                } 
                else break;

            }
            else{
                if(ct1>0){
                    t+='1';
                    ct1--;
                } 
                else break;
            }
        }
       // cout<<t<<" ";
        ll ans= s.length()-t.length();
        cout<<ans<<'\n';

        
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

void prv(vector<ll>&vec){
    for(auto it: vec){
        cout<<it<<" ";
    }
    cout<<endl;
}
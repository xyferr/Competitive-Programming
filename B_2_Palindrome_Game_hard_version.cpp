#include<bits/stdc++.h>
#define ll long long
using namespace std;

bool is_pallindrome(string s){
    ll len=s.size();
    for(ll i=0; i< len/2; i++){
        if(s[i]!=s[len-i-1]) return false;
    }
    return true;
}


void solve() {
    ll n; cin>>n;
    string s; cin>>s;
    ll zero_count=0;

    for(ll i=0; i<n; i++){
        if(s[i]=='0') zero_count++;
    }
    if(is_pallindrome(s)){
        

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
        
    }
    else{
        if(s.size()&1 && zero_count==2){
            if(s[s.size()/2]=='0'){
                cout<<"DRAW\n";
                return;
            }
        }
        cout<<"ALICE\n";
        
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


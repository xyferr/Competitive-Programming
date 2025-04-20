#include<bits/stdc++.h>
#define ll long long
using namespace std;




void solve() {
    string s; cin>>s;
    ll zero_count =0;
    for(auto it: s){
        if(it=='0'){
            zero_count++;
        }
    }
    if(s.size()==1){
        cout<<0<<endl;
        return;
    }
    if(zero_count==0){
        cout<<s.size()-1<<endl;
        return;
    }
    ll ans = 0;
    bool flag = false;
    ll ind  = 0;
    for(int i=s.size()-1; i>=0; i--){
        if(s[i]!='0' && flag==false){
            ind = i;
            flag = true;
        }
        else if(flag && s[i]!='0'){
            ans++;
        }
    }
    ll res = s.size()-1-ind +ans;
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


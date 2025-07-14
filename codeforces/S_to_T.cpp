#include<bits/stdc++.h>
#define ll long long
using namespace std;




void solve() {
    ll n; cin>>n;
    string s; cin>>s;
    string t; cin>>t;
    if(s==t){
        cout<<0<<endl;
        return;
    }

    for(ll i=0; i<n; i++){
        if(s[i]-'0'+t[i]-'0'==1){
            cout<<-1<<endl;
            return;
        }
        if(s[i]-'0'+t[i]-'0'==2){
            break;
        }
    }
    ll s_zero=0;
    ll t_zero=0;

    ll id=0;

    for(ll i=0; i<n; i++){
        if(s[i]=='1' && t[i]=='1'){
            id=i;
            break;
        }
    }
    vector<ll> ans;
    for(ll i=id+1; i<n; i++){
        if(s[i]=='0'){
            ans.push_back(i-1);
            s_zero++;
        }
        if(t[i]=='0'){
            t_zero++;
        }
    }
    for(ll i=n-1; i>=id+1; i--){
        if(t[i]=='0'){
            ans.push_back(i-1);
        }
        
    }
    cout<<s_zero+t_zero<<endl;
    for(ll i=0; i<ans.size(); i++){
        cout<<ans[i]+1<<" ";
    }
    cout<<endl;
    
    






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


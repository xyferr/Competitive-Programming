#include<bits/stdc++.h>
#define ll long long
using namespace std;




void solve() {
    string s; cin>>s;
    string str = s.substr(0,2);
    ll t = stoi(str);
    if(t>12){
        string ans="";
        t-=12;
        if(t<10) ans = "0";
        ans.append(to_string(t));
        // ans = to_string(t);
        ans.append(s.substr(2,3));
        cout<<ans<<" "<<"PM\n";
    }
    else if(s[0]=='0' && s[1]=='0'){
        string ans="12";
        ans.append(s.substr(2,3));
        cout<<ans<<" "<<"AM\n";
    }
    else if(s[0]=='1' && s[1]=='2'){
        cout<<s<<" "<<"PM\n";
    }
    else{
        cout<<s<<" "<<"AM\n";
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


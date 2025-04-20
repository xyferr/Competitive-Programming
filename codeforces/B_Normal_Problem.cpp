#include<bits/stdc++.h>
#define ll long long
using namespace std;




void solve() {
    string s; cin>>s;
    string ans = "";
    for(int i=s.size()-1; i>=0; i--) {
        if(s[i] == 'p'){
            ans+='q';
        }
        else if(s[i] == 'q'){
            ans+='p';
        }
        else{
            ans+=s[i];
        }
    }
    cout<<ans<<endl;




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


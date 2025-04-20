#include<bits/stdc++.h>
#define ll long long
using namespace std;




void solve() {
    string s; cin>>s;
    ll ans=0;
    for(int i=0; i<s.size(); i++){
        int cur=s[i]-'0';
        if(i%2==0){
            
            ans+=cur;
        }
        else{
            ans-=cur;
        }
    }

    cout<<ans<<'\n';




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


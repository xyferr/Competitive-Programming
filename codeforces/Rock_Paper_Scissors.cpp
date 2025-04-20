#include<bits/stdc++.h>
#define ll long long


using namespace std;
void prv(vector<ll>&vec);




void solve() {
    ll n; cin>>n;
    string s; cin>>s;
    ll it=(n/2)+1;
    ll rp=n-it;
    // cout<<it<<"-"<<rp<<" ";
    string ans;
    ll lst=0;
    while(rp>0 && lst<n){
        ans.push_back('P');
        if(s[lst]!='R') rp--;
        lst++;
    }
    

    for(ll i=lst; i<n; ++i){
        if(s[i]=='P') ans+='S';
        else if(s[i]=='S') ans+='R';
        else ans+='P';
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

void prv(vector<ll>&vec){
    for(auto it: vec){
        cout<<it<<" ";
    }
    cout<<endl;
}
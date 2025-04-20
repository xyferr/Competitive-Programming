#include<bits/stdc++.h>
#define ll long long


using namespace std;
template <typename T>
void prv(const vector<T>& vec);




void solve() {
    ll n,k; cin>>n>>k;
    string s; cin>>s;
   
    ll ans=INT_MAX , curr , req_w=0 ; 
    for (ll i = 0; i < k; i++)
    {
        if(s[i]=='W') req_w++;
    }
    ans=min(ans,req_w);
    for (ll i = k; i < n; i++)
    {
        if(s[i]=='W') req_w++;
        if(s[i-k]=='W') req_w--;
        ans=min(ans,req_w);
    }
    
    cout<<ans<<'\n';
    
    




}












template <typename T>
void prv(const vector<T>& vec) {
    for (const auto& element : vec) {
        cout << element << "";
    }
    cout <<'\n';
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


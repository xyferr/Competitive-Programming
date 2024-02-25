#include<bits/stdc++.h>
#define ll long long


using namespace std;
template <typename T>
void prv(const vector<T>& vec);




void solve() {
    ll n; cin>>n;
    string s,s2,f2,f; cin>>s>>f;
    
    s2=""; f2="";
    for(ll i=0; i<n; i++){
        if(s[i]!=f[i]){
            s2+=s[i];
            f2+=f[i];
        }
    }

    ll cts=0,ctf=0;

    for(ll i=0; i<s2.size(); i++){
        if(s2[i]=='1') cts++;
        if(f2[i]=='1') ctf++;
    }

    ll ans=s2.size();
    ans=ans-min(cts,ctf);
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


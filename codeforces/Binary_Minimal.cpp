#include<bits/stdc++.h>
#define ll long long
using namespace std;




void solve() {
    ll n,k; cin>>n>>k;
    string s; cin>>s;

    vector<ll> v(n);
    for(ll i=0; i<n; i++) v[i]=s[i]-'0';

    

    while(k--){
        bool flag = true;
        for(auto &it:v){
            if(it==1){
                it=0;
                flag = false;
                break;
            }
        }

        if(flag) v.pop_back();
    }

    for(auto it:v){
        cout<<it;
    }

    cout<<'\n';




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


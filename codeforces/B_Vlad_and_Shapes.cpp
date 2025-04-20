#include<bits/stdc++.h>
#define ll long long
using namespace std;




void solve() {
    ll n; cin>>n;
    vector<vector<char>> v(n , vector<char>(n));
    for(ll i=0; i<n; i++){
        for(ll j=0; j<n; j++){
            cin>>v[i][j];
        }
    }

    ll m=0;
    vector<ll> prv;
    for(ll i=0; i<n; i++){
        m=0;
        for(ll j=0; j<n; j++){
            if(v[i][j]=='1'){
                m++;
            }
        }
        if(m>0) prv.push_back(m);
    }
    
    for(ll i=1; i<prv.size(); i++){
        if(prv[i]!=prv[i-1]){
            cout<<"TRIANGLE"<<'\n';
            return;
        }
    }
    cout<<"SQUARE"<<'\n';



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


#include<bits/stdc++.h>
#define ll long long


using namespace std;
template <typename T>
void prv(const vector<T>& vec);




void solve() {
    ll n; cin>>n;
    string s; cin>>s;
    ll low, up;
    for(ll i=0; i<n; i++){
        if(s[i]=='B'){
            low=i+1;
            break;
        }
    }
    for(ll i=n; i>=0; i--){
        if(s[i]=='B'){
            up=i+1;
            break;
        }
    }
    ll ans= up-low+1;
    cout<<ans<<'\n';




}












template <typename T>
void prv(const vector<T>& vec) {
    for (const auto& element : vec) {
        cout << element << " ";
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


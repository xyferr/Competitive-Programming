#include<bits/stdc++.h>
#define ll long long


using namespace std;
template <typename T>
void prv(const vector<T>& vec);




void solve() {
    ll n; cin>>n;
    string s; cin>>s;
    bool flag=true;
    for(ll i=0; i+1<n; i++){
        if(s[i]>s[i+1]){
            s.erase(i,1);
            flag=false;
            break;
        }
    }
    if(flag)
    s.erase(n-1,1);
    cout<<s<<'\n';



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


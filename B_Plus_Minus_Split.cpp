#include<bits/stdc++.h>
#define ll long long
#define endl '\n'

using namespace std;
template <typename T>
void prv(const vector<T>& vec);

// nymer
// nymer


void solve() {
    ll n; cin>>n;
    string str; 
    cin>>str;
    ll ans=0;
    for(auto it:str){
        if(it=='-') ans--;
        else ans++;

    }
    cout<<abs(ans)<<'\n';    




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


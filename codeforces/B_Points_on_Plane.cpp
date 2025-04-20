#include<bits/stdc++.h>
#define ll long long


using namespace std;
template <typename T>
void prv(const vector<T>& vec);



void solve() {
    long double n; cin>>n;
    if(n==1) {
        cout<<0<<'\n';
        return;
    }
    ll ans= ceil(sqrt(n))-1;
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


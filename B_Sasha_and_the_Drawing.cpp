#include<bits/stdc++.h>
#define ll long long


using namespace std;
template <typename T>
void prv(const vector<T>& vec);




void solve() {
    ll n,k; cin>>n>>k;

    if(k==((4*n)-2)){
        cout<<(k/2)+1<<'\n';
        return;
    }

    ll ans = (k+1)/2;
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


#include<bits/stdc++.h>
#define ll long long


using namespace std;
template <typename T>
void prv(const vector<T>& vec);




void solve() {
    ll a1,b1; cin>>a1>>b1;
    if(a1&1 && b1&1){
        cout<<"No"<<'\n';
        return;
    }
    if(min(a1,b1)%2!=0){
        if(min(a1,b1)*2==max(a1,b1)){
            cout<<"No"<<'\n';
            return;
        }
    }
    cout<<"Yes\n";




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


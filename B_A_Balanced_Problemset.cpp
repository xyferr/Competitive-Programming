#include<bits/stdc++.h>
#define ll long long


using namespace std;
template <typename T>
void prv(const vector<T>& vec);


void solve() {
    ll x,n; cin>>x>>n;

    ll res=1;

    for(ll i=1; i*i<=x; ++i){
        if(x%i==0){
            if(n<=x/i) res=max(res,i);
            if(n<=i) res=max(res,x/i);
        }
    }
    
    cout<<res<<'\n';




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


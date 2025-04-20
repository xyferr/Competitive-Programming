#include<bits/stdc++.h>
#define ll long long


using namespace std;
template <typename T>
void prv(const vector<T>& vec);

bool ifSq(ll n){
    ll sq=sqrt(n);
    return ((sq*sq)==n);
}



void solve() {
    ll n; cin>>n;
    vector<ll> v(n);
    for(int i=0; i<n; i++) cin>>v[i];
    ll sq= accumulate(v.begin(),v.end(),0LL);
    if(ifSq(sq)){
        cout<<"YES"<<'\n';
    }
    else{
        cout<<"NO"<<'\n';
    }


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


#include<bits/stdc++.h>
#define ll long long


using namespace std;
template <typename T>
void prv(const vector<T>& vec);




void solve() {
    ll n; cin>>n;
    vector<ll> v(n);
    for(ll i=0; i<n; i++) cin>>v[i];

    ll s=v[0]; cout<<s<<" ";
    ll oct=0; ll res;
    if(v[0]&1) oct=1;
    
    for(ll i=1; i<n; i++) {
        s+=v[i];
        if(v[i]&1) oct++;
        if((oct%3==1)) res=s-(oct/3)-1;
        else res=s-(oct/3);
        cout<<res<<" ";
    }
    cout<<'\n';
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


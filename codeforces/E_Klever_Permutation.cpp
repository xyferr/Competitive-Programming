#include<bits/stdc++.h>
#define ll long long


using namespace std;
template <typename T>
void prv(const vector<T>& vec);




void solve() {
    ll n,k; cin>>n>>k;
    vector<ll> v(n);
    ll d=1 , f=n;
    for(ll i=0; i<k; i++){
        for(ll j=i; j<n; j+=k){
            if((i+1)&1){
                v[j]=d;
                d++;
            }
            else{
                v[j]=f;
                f--;
            }
        }
    }

    for(auto x: v){
        cout<<x<<" ";
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


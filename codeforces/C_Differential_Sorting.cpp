#include<bits/stdc++.h>
#define ll long long


using namespace std;
template <typename T>
void prv(const vector<T>& vec);




void solve() {
    ll n; cin>>n;
    vector<ll> v(n);
  //  bool allneg=1;
    for(ll i=0; i<n; i++){
        cin>>v[i];
        //if(v[i]>0) allneg=0;
    } 
    if(v[n-2]>v[n-1]){
        cout<<-1<<'\n';
        return;
    }
    if(v[n-2]<0 && v[n-1]<0){
        for(ll i=1; i<n; ++i){
            if(v[i]<v[i-1]){
                cout<<-1<<'\n';
                return;
            }
        }
        cout<<0<<'\n';
        return;
    }
    cout<<n-2<<'\n';
    for(ll i=0; i<n-2; ++i){
        cout<<i+1<<" "<<n-1<<" "<<n<<'\n';
    }




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


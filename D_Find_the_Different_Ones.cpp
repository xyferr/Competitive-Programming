#include<bits/stdc++.h>
#define ll long long


using namespace std;
template <typename T>
void prv(const vector<T>& vec);




void solve() {
    ll n; cin>>n;
    vector<ll> v(n);
    for(ll i=0; i<n; i++) cin>>v[i];

    vector<ll> agla(n);
    agla[n-1]=n;
    for(ll i=n-2; i>=0; --i){
        if(v[i]==v[i+1]){
            agla[i]=agla[i+1];
        } else{
            agla[i]=i+1;
        }
    }

    ll q; cin>>q;
    while(q--){
        ll l,r; cin>>l>>r;
        --l;
        if(agla[l]<r){
            cout<<l+1<<" "<<agla[l]+1<<'\n';
            
        }else{
            cout<<-1<<" "<<-1<<'\n';
        }
        
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


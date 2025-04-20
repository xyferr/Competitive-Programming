#include<bits/stdc++.h>
#define ll long long


using namespace std;
template <typename T>
void prv(const vector<T>& vec);




void solve() {
    ll n; cin>>n;
    vector<ll> v(n);
    for(ll i=0; i<n; i++) cin>>v[i];

    ll ans=0; 

    for(ll i=0; i+1<n; i++){
        ll inc = v[i]-(2*(i+1))%v[i];
        ll j=i+inc;
      
        for( j; j<n; j+=v[i]){
            
            if ((v[i] * v[j]) == (i + j + 2)) {
                ans++;
            }
        }
    }

    /*

    v[i]*v[j] = i+j
    1 2 3 4 5 6 7 8 9 
    1 3 4 5 6 7 8 9 10
          5 11 12 13 14 15 
   [3, , ,7, , , , , ] 
    
    */
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


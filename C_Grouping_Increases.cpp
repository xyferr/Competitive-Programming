#include<bits/stdc++.h>
#define ll long long

using namespace std;
template <typename T>
void prv(const vector<T>& vec);





void solve() {
    ll n; cin>>n;

    vector<ll> v(n);
    for(ll i=0; i<n; i++) cin>>v[i];

    ll s=n+1,t=n+1;
    ll res=0;

    for(ll i=0; i<n; i++){

        if(v[i]>max(s,t)){
            res++;
            if(s<=t) s=v[i];
            else t=v[i];
        }
        else if(s<=t && v[i]<=s) 
            s=v[i];
        else if(t<=s && v[i]<=t) 
            t=v[i];
        else if(v[i]<=s) 
            s=v[i];
        else if(v[i]<=t) 
            t=v[i];
        
        
        
    }

    cout<<res<<'\n';
   
    
}














template <typename T>
void prv(const vector<T>& vec) {
    for (const auto& element : vec) {
        cout << element << " ";
    }
    cout << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int T = 1;
    cin >> T;
    while (T--) {
        solve();
    }
    return 0;
}

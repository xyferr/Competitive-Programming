#include<bits/stdc++.h>
#define ll long long


using namespace std;
template <typename T>
void prv(const vector<T>& vec);




void solve() {
    ll n; cin>>n;
    vector<ll> v(n);
    for(ll i=0; i<n; i++) cin>>v[i];
    map<ll,ll> mp;
    ll res=0;
    for (ll i = 0; i < n; i++)
    {
        if(v[i]==0){
            if(!mp.empty()){
                auto it=mp.rbegin();
                res+=it->first;
                mp[it->first]--;
                if(mp[it->first]==0) mp.erase(it->first);
            }
        }
        else{
            mp[v[i]]++;
        }
    }
    cout<<res<<'\n';




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


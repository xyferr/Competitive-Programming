#include<bits/stdc++.h>
#define ll long long
using namespace std;




void solve() {
    ll n; cin>>n;
    vector<ll> v(n);
    for(ll i=0; i<n; i++) cin>>v[i];

    vector<ll> cnt(30,0);

    for(int i=0; i<n; i++){
        for(int j=0; j<30; j++){
            if(v[i]&(1<<j)){
                cnt[j]++;
            }
        }
    }
    ll res = 0;
    for(int i=0; i<n; i++){
        ll sum = 0;
        for(int j=0; j<30; j++){
            if(v[i]&(1<<j)){
                sum += ((n-cnt[j])*(1<<j));
                // sum += (cnt[j]*(1<<j));
            }
            else{
                sum += (cnt[j]*(1<<j));
            }
        }
        res = max(res,sum);
    }

    cout<<res<<endl;




}






int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int T = 1; 
    cin >> T;
    while(T--) {
        solve();
    }
    return 0;
}


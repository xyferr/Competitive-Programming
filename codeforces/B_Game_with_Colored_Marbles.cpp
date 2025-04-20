#include<bits/stdc++.h>
#define ll long long
using namespace std;




void solve() {
    ll n; cin>>n;
    vector<ll> v(n);
    for(ll i=0; i<n; i++) cin>>v[i];
    unordered_map<ll, ll> mp;
    for(ll i=0; i<n; i++){
        mp[v[i]]++;
    }

    ll score = 0,score2=0;
    ll times=0,times2=0;
    for(auto x: mp){
        if(x.second==1){
            times++;
            score+=2;
        }
        else{
            times2++;
            score2+=1;
        }
    }
    if(times&1){
        score = score/2 + 1;
    }
    else{
        score = score/2;
    }
    
    ll res = score+score2;
    cout<<res<<endl;
    






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


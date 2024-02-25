#include<bits/stdc++.h>
#define ll long long
using namespace std;




void solve() {
    ll n,m; cin>>n>>m;
    vector<ll> v(n);
    for(ll i=0; i<n; i++) cin>>v[i];
    string s; cin>>s;  
    vector<ll> ans;
    ll wm =1;

    for(ll i=0; i<n; i++){
        wm*=(v[i]%m);
    }
    cout<<wm%m<<" ";
    wm = wm%m;
    ll l=0 , r=n-1;
    for(ll i=0; i<n-1; i++){
      
        if(s[i]=='L'){
            ll cur =  v[l]%m;
            if(cur==0) cur=m;
            if(wm==0) wm=m;
            ll res = (wm/cur)%m;
            
            wm = res + (res*cur);
            ans.push_back(res);
            l++;
        }
        else{
            ll cur = v[r]%m;
            if(cur==0) cur=m;
            if(wm==0) wm=m;
            ll res = (wm/cur)%m;
            wm = res + (res*cur);
            ans.push_back(res);
            r--;
        }
    }
    for(ll i=0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }
    cout<<'\n';




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


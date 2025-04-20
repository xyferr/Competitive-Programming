#include<bits/stdc++.h>
#define ll long long
using namespace std;




void solve() {
    ll n,k; cin>>n>>k;
    vector<ll> a(n), b(n);
    for(ll i=0; i<n; i++) cin>>a[i];
    for(ll i=0; i<n; i++) cin>>b[i];

    map<ll,ll> aa , bb;

    for(auto it:a) aa[it]++;
    for(auto it:b) bb[it]++;

    vector<ll> l,r;
    ll inc=0;

    for(auto it:aa){
        if(it.second==2){
            l.push_back(it.first);
            l.push_back(it.first);
            inc+=2;
        }
        if(inc==(2*k)) break;
    }
    inc=0;
    for(auto it:bb){
        if(it.second==2){
            r.push_back(it.first);
            r.push_back(it.first);
            inc+=2;
        }
        if(inc==(2*k)) break;
    }

    if(l.size()==(2*k)){
        for(auto it:l){
            cout<<it<<" ";
        }
        cout<<'\n';

        for(auto it:r){
            cout<<it<<" ";
        }
        cout<<'\n';
    }
    else{
        for(auto it: aa){
            if(it.second==1){
                l.push_back(it.first);
                r.push_back(it.first);
                inc++;
            }
            if(inc==(2*k)) break;
        }

        for(auto it:l){
            cout<<it<<" ";
        }
        cout<<'\n';

        for(auto it:r){
            cout<<it<<" ";
        }
        cout<<'\n';
    }










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


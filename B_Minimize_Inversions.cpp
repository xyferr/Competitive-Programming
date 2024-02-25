#include<bits/stdc++.h>
#define ll long long


using namespace std;





void solve() {
   






}














int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int T = 1; cin >> T;
    while(T--) {
         ll n; cin>>n;
    vector<pair<ll,ll>> a(n),bin(n);

    for(ll i=0; i<n; ++i){
        cin>>a[i].first;
        a[i].second=i;
    }

    for(ll i=0; i<n; ++i){
        cin>>bin[i].first;
        bin[i].second=i;
    }

    sort(a.begin(),a.end());

    vector<ll> result(n);

    for(ll i=0; i<n; ++i){
        result[i]=bin[a[i].second].first;
    }
    for(ll i=0; i<n; ++i){
        cout<<a[i].first<<" ";
    }
    cout<<'\n';
    for(ll i=0; i<n; ++i){
        cout<<result[i]<<" ";
    }
    cout<<'\n';
    }
    return 0;
}


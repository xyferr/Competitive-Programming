#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll dist(pair<ll,ll> p,pair<ll,ll> q){
    ll distance = abs(q.first-p.first)+ abs(q.second-p.second);
    return distance;
}


void solve() {
    ll n,k,a,b; cin>>n>>k>>a>>b;
    vector<pair<ll,ll>> v(n);
    for(ll i=0; i<n; i++){
        ll x,y; cin>>x>>y;
        v[i]={x,y};
    }

    ll min_dist_b = INT64_MAX;
    ll min_dist_a = INT64_MAX;
    for(ll i=0; i<k; i++){
        min_dist_b = min( min_dist_b,dist(v[i],v[b-1]));
        min_dist_a = min(min_dist_a , dist(v[i] , v[a-1]));
        // cout<<min_dist_a<<"-"<<min_dist_b<<" ";
    }
    ll dist_ab = dist(v[a-1],v[b-1]);
    if(dist_ab< min_dist_a + min_dist_b || min_dist_b == INT64_MAX){
        cout<<dist_ab<<'\n';
        return;
    }
    cout<<min_dist_a+min_dist_b<<'\n';







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


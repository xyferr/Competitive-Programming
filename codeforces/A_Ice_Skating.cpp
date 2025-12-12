#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;

void solve() {
    ll n; cin >> n;
    set<pair<int,int>>s;
    for(int i=0; i<n; ++i){
        int x,y; cin>>x>>y;
        
        s.insert({x,y});
    }

    ll res=0;
    set<pair<int,int>>vis;
    
    function<void(pair<int,int>)>dfs = [&](pair<int,int>cur){
        if(vis.count(cur)) return;
        vis.insert(cur);
        int x=cur.first, y=cur.second;
        for(int dx=x; dx<=1000; ++dx){
            if(s.count({dx,y})){
                dfs({dx,y});
            }
        }
        for(int dy=y; dy<=1000; ++dy){
            if(s.count({x,dy})){
                dfs({x,dy});
            }
        }
        for(int dx=x; dx>=0; --dx){
            if(s.count({dx,y})){
                dfs({dx,y});
            }
        }
        for(int dy=y; dy>=0; --dy){
            if(s.count({x,dy})){
                dfs({x,dy});
            }
        }
        
    };
    for(auto &p: s){
        if(!vis.count(p)){
            res++;
            dfs(p);
        }
    }
    cout<<res-1<<endl;

    









}













int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int T = 1;
    // cin >> T;
    while (T--) {
        
        solve();
    }
    return 0;
}
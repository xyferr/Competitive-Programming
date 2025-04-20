#include<bits/stdc++.h>
#define ll long long
using namespace std;

const int N = 1e5+5;
vector<int> g[N];
int vis[N];

void dfs(int vt){
    vis[vt]= true;;
    for(int child: g[vt]){
        if(vis[child]) continue;

        dfs(child);

    }

}

int level[N];
void bfs(int source){
    queue<int> q;
    q.push(source);
    vis[source]=1;
    
    while(!q.empty()){
        int cur_v = q.front();
        q.pop();

        for(int child: g[cur_v]){
            if(vis[child]) continue;
            vis[child]=1;
            q.push(child);
            level[child] = level[cur_v]+1;
        }
    }
}


void solve() {
    ll n,e; cin>>n>>e;

    for(int i=0; i<e; i++){
        int x,y; cin>>x>>y;
        g[x].push_back(y);
        g[y].push_back(x);
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


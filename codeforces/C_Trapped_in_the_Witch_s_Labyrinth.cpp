#include<bits/stdc++.h>
#define ll long long
using namespace std;



bool isvalid(ll i, ll j, ll r, ll c) {
    if(i>=0 && i<r && j>=0 && j<c) {
        return true;
    }
    return false;
}

int dfs(vector<string> &v, ll i, ll j, ll r, ll c, vector<vector<int>> &ans, vector<vector<bool>> &vis) {
    
    if(ans[i][j]==1) {
        return 1;
    }
    if(vis[i][j]==1) {
        // cerr<<i<<" "<<j<<endl;
        // cerr<<ans[i][j]<<endl;
        return ans[i][j]==-1?1:ans[i][j];
    }
    vis[i][j] = true;
    if(v[i][j]=='U') {
        if(i-1>=0) {
            return ans[i][j] = dfs(v, i-1, j, r, c, ans, vis);
        }
        else{
            return ans[i][j]=0;

        }
    }
    if(v[i][j]=='L'){
        if(j-1>=0) {
            return ans[i][j] = dfs(v, i, j-1, r, c, ans, vis);
        }
        else{
            return ans[i][j]=0;

        }
    }
    if(v[i][j]=='R'){
        if(j+1<c) {
            return ans[i][j]=dfs(v, i, j+1, r, c, ans, vis);
        }
        else{
            return ans[i][j]=0;

        }
    }
    if(v[i][j]=='D'){
        if(i+1<r) {
            return ans[i][j]=dfs(v, i+1, j, r, c, ans, vis);
        }
        else{
            return  ans[i][j]=0;

        }
    }
    if(v[i][j]=='?'){
        return 1;
    }

}


void solve() {
    ll r,c; cin>>r>>c;
    vector<string> v(r);
    for(ll i=0; i<r; i++) {
        cin>>v[i];
    }
    
    vector<vector<bool>> vis(r, vector<bool>(c, false));
    vector<vector<int>> ans(r, vector<int>(c, -1));
    for(ll i=0; i<r; i++) {
        for(ll j=0; j<c; j++) {
            if(vis[i][j]==1 || v[i][j]=='?') {
                continue;
            }
            
            
            ans[i][j]=dfs(v, i, j, r, c,ans, vis);
        }
    }

    ll res = 0;
    for(ll i=0; i<r; i++) {
        for(ll j=0; j<c; j++) {
            if(ans[i][j]==1) {
                res++;
            }
            else if(v[i][j]=='?'){
                if(isvalid(i-1, j, r, c) && (ans[i-1][j]==1 || ans[i-1][j]==-1)) {
                    res++;
                }
                else if(isvalid(i, j-1, r, c) && (ans[i][j-1]==1 || ans[i][j-1]==-1)) {
                    res++;
                }
                else if(isvalid(i, j+1, r, c) && (ans[i][j+1]==1 || ans[i][j+1]==-1)) {
                    res++;
                }
                else if(isvalid(i+1, j, r, c) && (ans[i+1][j]==1 || ans[i+1][j]==-1)) {
                    res++;
                }
            }
        }
    }
    cout<<res<<endl;

    // for(ll i=0; i<r; i++){
    //     for (ll j=0; j<c; j++){
    //         cerr<<ans[i][j];
    //     }
    //     cerr<<endl;
    // }

    





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


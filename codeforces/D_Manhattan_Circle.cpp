#include<bits/stdc++.h>
#define ll long long
using namespace std;




void solve() {
    ll n,m; cin>>n>>m;
    vector<vector<char>> v(n,vector<char>(m));
    int ind = 0;
    int maxo = 0;
    for(int i=0; i<n; i++){
        int cur = 0;
        for(int j=0; j<m; j++){
            cin>>v[i][j];
            if(v[i][j]=='#'){
                cur++;
            }
            // cout<<cur<<endl;
        }
        if(cur>maxo){
            maxo = cur;
            ind = i;
        }
    }
    int ind2 = 0;
    maxo = 0;

    for(int i=0; i<m; i++){
        int cur = 0;
        for(int j=0; j<n; j++){
            if(v[j][i]=='#'){
                cur++;
            }
        }
        if(cur>maxo){
            maxo = cur;
            ind2 = i;
        }
        
    }

    cout<<ind+1<<" "<<ind2+1<<endl;





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


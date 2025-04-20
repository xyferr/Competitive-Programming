#include<bits/stdc++.h>
#define ll long long
using namespace std;




void solve() {
    ll n,m; cin>>n>>m;
    vector<vector<ll>> a(n,vector<ll>(m));
    if(n%2==0 && m&2==0){
        for(int i=0; i<n; i++) {
        
        
            for(int j=0; j<m; j++) {
                if(i==j) a[i][j]=3;
                else a[i][j]=2;
            }
        }
    }
    else{
        for(int i=0; i<n; i++) {
        
        
            for(int j=0; j<m; j++) {
                if(i>=m && j==m-1){
                    a[i][j]=3;
                }
                else if(j>=n && i==n-1){
                    a[i][j]=3;
                }
                else{
                    if(i==j) a[i][j]=3;
                    else a[i][j]=2;
                }
            }
        }
    }
    
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
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


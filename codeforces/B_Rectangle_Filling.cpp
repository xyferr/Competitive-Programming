#include<bits/stdc++.h>
#define ll long long
using namespace std;




void solve() {
    ll n,m; cin>>n>>m;
    vector<vector<char>> v(n,vector<char>(m));
    for(ll i=0; i<n; i++){
        for(ll j=0; j<m; j++){
            cin>>v[i][j];
        }
    }
    // ll countb=0 , countw=0;
    // if(v[0][0]=='W') countw++;

    // if(v[0][0]=='B') countb++;
   
    // if(v[n-1][0]=='W') countw++;
    // if(v[n-1][0]=='B') countb++;
    // if(v[0][m-1]=='W') countw++;
    // if(v[0][m-1]=='B') countb++;
    // if(v[n-1][m-1]=='W') countw++;
    // if(v[n-1][m-1]=='B') countb++;

    // cout<<countb<<' '<<countw<<endl;
    // if(countb>=3 || countw>=3){
    //     cout<<"YES"<<endl;
    //     return;
    // }
    // cout<<"hello"<<endl;

    if(v[0][0]=='W' && v[0][m-1]=='W' ){
        // cout<<v[0][0]<<' '<<v[0][m-1]<<endl;
        for(ll i=0; i<m; i++){
            // cout<<v[n-1][i]<<' ';
            if(v[n-1][i]=='W'){
                
                cout<<"YES"<<endl;
                return;
            }
        }
    }
    if(v[0][0]=='B' && v[0][m-1]=='B' ){
        for(ll i=0; i<m; i++){
            if(v[n-1][i]=='B'){
                cout<<"YES"<<endl;
                return;
            }
        }
    }
    if(v[0][0]=='W' && v[n-1][0]=='W' ){
        for(ll i=0; i<n; i++){
            if(v[i][m-1]=='W'){
                cout<<"YES"<<endl;
                return;
            }
        }
    }
    if(v[0][0]=='B' && v[n-1][0]=='B' ){
        for(ll i=0; i<n; i++){
            if(v[i][m-1]=='B'){
                cout<<"YES"<<endl;
                return;
            }
        }
    }
    if(v[0][m-1]=='W' && v[n-1][m-1]=='W' ){
        for(ll i=0; i<n; i++){
            if(v[i][0]=='W'){
                cout<<"YES"<<endl;
                return;
            }
        }
    }
    if(v[0][m-1]=='B' && v[n-1][m-1]=='B' ){
        for(ll i=0; i<n; i++){
            if(v[i][0]=='B'){
                cout<<"YES"<<endl;
                return;
            }
        }
    }
    if(v[n-1][0]=='W' && v[n-1][m-1]=='W' ){
        for(ll i=0; i<m; i++){
            if(v[0][i]=='W'){
                cout<<"YES"<<endl;
                return;
            }
        }
    }
    if(v[n-1][0]=='B' && v[n-1][m-1]=='B' ){
        for(ll i=0; i<m; i++){
            if(v[0][i]=='B'){
                cout<<"YES"<<endl;
                return;
            }
        }
    }
    if(v[0][0]=='W' && v[n-1][m-1]=='W' ){
        cout<<"YES"<<endl;
        return;
    }
    if(v[0][0]=='B' && v[n-1][m-1]=='B' ){
        cout<<"YES"<<endl;
        return;
    }
    if(v[0][m-1]=='W' && v[n-1][0]=='W' ){
        cout<<"YES"<<endl;
        return;
    }
    if(v[0][m-1]=='B' && v[n-1][0]=='B' ){
        cout<<"YES"<<endl;
        return;
    }
    
    cout<<"NO"<<endl;

    




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


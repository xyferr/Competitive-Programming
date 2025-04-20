#include<bits/stdc++.h>
#define ll long long
using namespace std;




void solve() {
    ll n,m; cin>>n>>m;
    vector<string> a(n);
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    ll res = 1e9;
    
    vector<bool> exits(n);
    for(int i=0; i<m; i++){
        ll miss = 0;
        vector<string> b(n);
        for(int j=0; j<n; j++){
            cin>>b[j];
        }
        for(int j=0; j<n; j++){
            if(a[j]!=b[j]){
                miss++;

            }
            else{
                exits[j] = true;
            }
        }
        res = min(res,n+(2*miss));
    }

    
    for(int i=0; i<n; i++){
        if(!exits[i]){
            cout<<-1<<endl;
            return;
        }
    }
    cout<<res<<endl;



}






int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int T = 1; 
    cin >> T;
    while(T--) {
        solve();
    }
    return 0;
}





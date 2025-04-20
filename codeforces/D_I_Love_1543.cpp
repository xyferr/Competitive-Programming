#include<bits/stdc++.h>
#define ll long long
using namespace std;


int check(string s){
    int n=s.size();
    int m=4;
    string t="1543";
    int res=0;
    for(int i=0; i<n; i++){
        int j=0;
        while(j<m && s[(i+j)%n]==t[j]){
            j++;
        }
        if(j==m){
            res++;
        }
    }
    return res;
}


void solve() {
    ll n,m; cin>>n>>m;
    vector<vector<char>> a(n, vector<char>(m));
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>a[i][j];
        }
    }
    ll res=0;
    string cur="";
    
    ll layer=min(n/2,m/2);
    for(int i=0; i<min(n/2,m/2); i++){
        cur="";
        for(int j=n-i-1; j>=i; j--){
            cur+=a[j][i];
        }
        for(int j=i+1; j<m-i; j++){
            cur+=a[i][j];
        }
        for(int j=i+1; j<n-i; j++){
            cur+=a[j][m-i-1];
        }
        for(int j=m-i-2; j>=i+1; j--){
            cur+=a[n-i-1][j];
        }
        
        res+=check(cur);
    }
    cout<<res<<endl;








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


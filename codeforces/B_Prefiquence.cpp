#include<bits/stdc++.h>
#define ll long long
using namespace std;




void solve() {
    ll n,m; cin>>n>>m;
    string a , b; cin>>a>>b;
    ll ans = 0;
    int j=0;
    for(int i=0; i<n; i++){
        while(j<m){
            if(a[i]==b[j]){
                ans++;
                j++;
                break;
            }
            j++;
        }
    }
    cout<<ans<<endl;




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


#include<bits/stdc++.h>
#define ll long long
using namespace std;



void solve() {
    ll n; cin>>n;
    for(ll i=1; i<=n; i++){
        if(n%i!=0){
            cout<<i-1<<'\n';
            return;
        }
    }
    cout<<n<<'\n';




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


#include<bits/stdc++.h>
#define ll long long


using namespace std;




void solve() {
    ll n; cin>>n;


    int low=1 , up=n;
    while(low<up){
        
        cout<<low<<' '<<up<<' ';
        low++; up--;
        
    }


    if(low==up) cout<<low;
    cout<<'\n';





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


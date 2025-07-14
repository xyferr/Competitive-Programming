#include<bits/stdc++.h>
#define ll long long
using namespace std;




void solve() {
    ll n; cin>>n;
    if(n<=3){
        cout<<-1<<endl;
        return;
    }
    while(true){
        if(2*n<(n+n-1+n-2)){
            cout<<(n+n-1+n-2)<<endl;
            return;
        }
        if(n<=3){
            break;
        }
        n--;
    }
    
    cout<<-1<<endl;




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


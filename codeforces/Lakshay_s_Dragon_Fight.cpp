#include<bits/stdc++.h>
#define ll long long
using namespace std;




void solve() {
    ll x,y; cin>>x>>y;
    if(x==y) cout<<0<<endl;
    else if(x<y){
        cout<<y-x<<endl;
    }
    else{
        ll ans=(x-y)/2;
        if((x-y)%2) ans+=2;
        cout<<ans<<endl;

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


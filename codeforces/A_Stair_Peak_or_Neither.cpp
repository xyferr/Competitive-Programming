#include<bits/stdc++.h>
#define ll long long
using namespace std;




void solve() {
    ll a,b,c; cin>>a>>b>>c;
    if(c>b and b>a){
        cout<<"STAIR\n";
    }
    else if(c<b && b>a){
        cout<<"PEAK\n";
    }
    else{
        cout<<"NONE\n";
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


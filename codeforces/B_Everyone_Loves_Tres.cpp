#include<bits/stdc++.h>
#define ll long long
using namespace std;


vector<string> res(500);


void solve() {
    ll n; cin>>n;
    cout<<res[n-1]<<endl;




}






int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int T = 1; cin >> T;
    res[0]="-1";
    res[1]="66";
    res[2]="-1";
    res[3]="3366";
    res[4]="36366";
    res[5]="333366";
    res[6]="3336366";
    for(int i=7; i<500; i++) {
        res[i]="33"+res[i-2];
    }
    while(T--) {
        solve();
    }
    return 0;
}


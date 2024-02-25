#include<bits/stdc++.h>
#define ll long long


using namespace std;


//rohit



void solve() {
    ll n,k; cin>>n>>k;

    ll ans=n*k;

    char curlet='a';

    while(ans--){
        cout<<curlet;
        curlet++;
        if(curlet-'a'==k) curlet='a';
    }
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


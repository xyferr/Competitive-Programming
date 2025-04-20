#include<bits/stdc++.h>
#define ll long long
using namespace std;




void solve() {
    ll n; cin>>n;
    string s; cin>>s;
    ll girl = 0,boys = 0;
    for(auto it: s){
        if(it=='G') girl++;
        else boys++;
        if(boys>(2*girl)){
            cout<<girl+boys<<endl;
            return;
        }
    }
    cout<<girl+boys<<endl;




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


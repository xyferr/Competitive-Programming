#include<bits/stdc++.h>
#define ll long long
#define endl '\n'

using namespace std;
void prv(vector<ll>&vec);




void solve() {
    ll n; cin>>n;
    vector<ll> dp(n+2);
    dp[0]=0; 
    dp[1]=1;
    for(ll i =2; i<n+2; i++){
        dp[i]=dp[i-1]+dp[i-2];
    } 
    cout<<dp.back();

    
    



}













int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int T = 1; //cin >> T;
    while(T--) {
        solve();
    }
    return 0;
}

void prv(vector<ll>&vec){
    for(auto it: vec){
        cout<<it<<" ";
    }
    cout<<endl;
}   
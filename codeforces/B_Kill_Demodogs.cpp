#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll mod = 1e9+7;


void solve() {
    ll n; cin>>n;


    // Sum of squares: n(n+1)(2n+1)/6
    ll sum_sq = n % mod;
    sum_sq = sum_sq * ((n + 1) % mod) % mod;
    sum_sq = sum_sq * ((2 * n + 1) % mod) % mod;
    sum_sq = (sum_sq * 166666668) % mod;  // 166666668 ≡ 6^(-1) mod 1e9+7

    // Sum of linear terms: n(n+1)/2
    ll sum_linear = n % mod;
    sum_linear = sum_linear * ((n + 1) % mod) % mod;
    sum_linear = (sum_linear * 500000004) % mod;  // 500000004 ≡ 2^(-1) mod 1e9+7

    ll diff = (sum_sq - sum_linear + mod) % mod; 

 
    ll res = (sum_sq + diff) % mod;
    
    res = res * 2022 % mod;  
    cout<<res<<endl;

    




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


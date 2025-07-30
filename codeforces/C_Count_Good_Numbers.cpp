#include<bits/stdc++.h>
#define ll long long
#define endl "\n"   
using namespace std;

ll check(ll n){
    if(n==0) return 0;
    ll cnt = 0;

    cnt += n/2;
    cnt += n/3;
    cnt += n/5;
    cnt += n/7;

    if(n>=6) cnt-= n/6;
    if(n>=10) cnt-= n/10;
    if(n>=14) cnt-= n/14;
    if(n>=15) cnt-= n/15;
    if(n>=21) cnt-= n/21;
    if(n>=35) cnt-= n/35;

    if(n>=30) cnt += n/30;
    if(n>=42) cnt += n/42;
    if(n>=70) cnt += n/70;
    if(n>=105) cnt += n/105;

    if(n>=210) cnt -= n/210;

    return n - cnt;
}


void solve() {
    ll l, r;
    cin >> l >> r;
    ll res = check(r) - check(l - 1);
    cout << res << endl;
    // ll res = sieve[r] - sieve[l - 1];
    






}






int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int T = 1; 
    cin >> T;
    
    // for(int i = 0; i<10; i++) {
    //     // marking single digit primes as non-prime
    //     sieve[i] = 0; // 0, 1, 2, 3, 4, 5, 6, 7, 8, 9
    // }
    // for(int i = 10; i<N; i++) {
    //     sieve[i]=sieve[i-1] + sieve[i];
    // }
    while(T--) {
        solve();
    }
    return 0;
}


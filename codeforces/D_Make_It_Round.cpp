#include<bits/stdc++.h>
#define ll long long
#define endl "\n"   
using namespace std;


ll countfive(ll n) {
    // counts the number of 5s in the prime factorization of n
    ll count = 0;
    while (n > 0 && n % 5 == 0) {
        count++;
        n /= 5;
    }
    return count;
}
ll counttwo(ll n) {
    // counts the number of 2s in the prime factorization of n
    ll count = 0;
    while (n > 0 && n % 2 == 0) {
        count++;
        n /= 2;
    }
    return count;
}



void solve() {
    ll n,m; cin>>n>>m;
    ll five = countfive(n);
    ll two = counttwo(n);

    ll dif = 0;
    ll res =n;
    ll mcopy = m;
    if(five>two){
        dif = five - two;
        // we will try to find the number of 2s in the prime factorization of m
        
        while (mcopy > 2 && dif > 0) {
            dif--;
            mcopy /= 2;
            res *= 2;
        }  
    }
    else if(two>five){
        dif = two - five;
        // we will try to find the number of 5s in the prime factorization of m
        
        while (mcopy >5  && dif > 0) {
            dif--;
            mcopy /= 5;
            res *= 5;
        }  
    }
    // cerr<<"five: " << five << " two: " << two << " dif: " << dif <<" mcopy: " << mcopy <<" res: " << res << endl;
    ll div = 10;
    while(mcopy > 1 && div>1){
        if(mcopy<div){
            div--;
        }
        else{
            mcopy /= div;
            res *= div;
        }
    }
    cout << res << endl;







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


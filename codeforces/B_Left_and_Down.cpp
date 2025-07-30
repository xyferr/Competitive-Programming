#include<bits/stdc++.h>
#define ll long long
#define endl "\n"   
using namespace std;

ll check(ll a, ll b, ll k){
    // we want to check if there exists a number x for which a/x == b/x and x <= k 
    
}


void solve() {
    ll a,b,k; cin>>a>>b>>k;
    if(a>k && b>k){
        ll div = gcd(a,b);
        ll ax = a/div;
        ll bx = b/div;
        if(ax<=k && bx<=k){
            cout<<1<<endl;
        }
        else{
            cout<<2<<endl;
        }
    }
    else if(a<=k && b<=k){
        cout<<1<<endl;
    }
    else{
        ll div = gcd(a,b);
        ll ax = a/div;
        ll bx = b/div;
        if(ax<=k && bx<=k){
            cout<<1<<endl;
        }
        else{
            cout<<2<<endl;
        }
    }





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


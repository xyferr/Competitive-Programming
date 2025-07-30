#include<bits/stdc++.h>
#define ll long long
#define endl "\n"   
using namespace std;




void solve() {
    ll n; cin>>n;
    vector<ll> p(n),s(n);
    for(ll i=0; i<n; i++) cin>>p[i];
    for(ll i=0; i<n; i++) cin>>s[i];

    if(p[n-1]!=s[0]){
        cout<<"NO"<<endl;
        return;
    }

    ll curres=p[n-1];
    ll gcdp=p[0];
    for(int i=0; i<n-1; i++){
        if(gcd(p[i],s[i+1])!=curres){
            cout<<"NO"<<endl;
            return;
        }
        gcdp=gcd(gcdp,p[i+1]);
    }
    
    if(gcdp!=curres){
        cout<<"NO"<<endl;
        return;
    }
    // for(int i=n-1; i>=1; i--){
    //     if(gcd(s[i],p[i-1])!=curres){
    //         cout<<"NO"<<endl;
    //         return;
    //     }
    // }   
    cout<<"YES"<<endl;






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


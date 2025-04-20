#include<bits/stdc++.h>
#define ll long long
using namespace std;


void solve() {
    ll n,k,x; cin>>n>>k>>x;

    ll minimum_sum = k*(k+1)/2;
    ll maximum_sum = n*(n+1)/2 - (n-k)*(n-k+1)/2;
    if(x<=maximum_sum && x>=minimum_sum){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
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


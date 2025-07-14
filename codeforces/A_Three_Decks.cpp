#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;

void solve(){
    ll a,b,c;
    cin>>a>>b>>c;
    if((a+b+c)%3==0&&a+c>=2*b){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}

int main() {
    ll T; cin>>T;
    while(T--) solve();
}
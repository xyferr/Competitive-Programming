#include<bits/stdc++.h>
#define ll long long
using namespace std;




void solve() {
    ll n; cin>>n;
    string str; cin>>str;
    if(n<3){
        cout<<0<<'\n';
        return;
    }
    ll count = 0;

    for(ll i=1; i+1<n; i++){
        if(str[i-1]=='m' && str[i]=='a' && str[i+1]=='p') count++;
        if(str[i]=='i' && str[i-1]=='p' && str[i+1]=='e'){
            count++;
        }
        if(str[i]=='p' && i+2<n && i-2>=0 ){
            if( str[i-1]=='a' && str[i+1]=='i' && str[i+2]=='e' && str[i-2]=='m')
            count--;
        }
    }
    
    cout<<count<<'\n';




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


#include<bits/stdc++.h>
#define ll long long
using namespace std;




void solve() {
    ll n; cin>>n;
    string s; cin>>s;
    ll empty = 0;
    ll count_empty = 0;
    if(s[0]=='.') count_empty++;
    for(ll i=1; i<n; i++){
        if(s[i]=='.' && s[i-1]=='.'){
            empty++;
        }
        else{
            empty=0;
        }
        if(empty==2){
            cout<<"2"<<endl;
            return;
        }
        if(s[i]=='.') count_empty++;
    }
    cout<<count_empty<<endl;






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


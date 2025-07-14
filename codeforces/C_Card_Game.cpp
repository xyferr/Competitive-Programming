#include<bits/stdc++.h>
#define ll long long
#define endl "\n"   
using namespace std;




void solve() {
    ll n; cin>>n;
    string s; cin>>s;
    if(s[n-1]=='A' && s[0]=='A'){
        cout<<"Alice"<<endl;
        return;
    }
    else if(s[n-1]=='B' && s[0]=='B'){
        cout<<"Bob"<<endl;
        return;
    }

    ll count_a=0, count_b=0;
    for(ll i=0; i<n; i++){
        if(s[i]=='A'){
            count_a++;
        }
        else if(s[i]=='B'){
            count_b++;
        }
    }

    if(s[n-1]=='A'){
        if(s[n-2]=='A'){
            cout<<"Alice"<<endl;
            return;
        }
        else{
            cout<<"Bob"<<endl;
            return;
        }
        
    }
    else if(s[n-1]=='B'){
        if(count_b>1){
            cout<<"Bob"<<endl;
            return;
        }
        else{
            cout<<"Alice"<<endl;
            return;
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


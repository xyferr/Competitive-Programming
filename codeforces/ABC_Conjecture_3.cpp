#include<bits/stdc++.h>
#define ll long long
using namespace std;




void solve() {
    ll n; cin>>n;
    string s; cin>>s;
    unordered_map<char , int> mp;
    int count = 0;
    for(int i=0; i<n; i++){
        if(s[i]=='a') mp['a']++;
        else if(s[i]=='b'){
            mp['b'] = min(mp['a'], mp['b']+1);
        } 
        else{
            
            count += min(mp['a'], mp['b']);
            mp['a'] -= min(mp['a'], mp['b']);
            mp['b'] -= min(mp['a'], mp['b']);

        
        }
    }
    cout<<count<<endl;




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


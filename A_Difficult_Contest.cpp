#include<bits/stdc++.h>
#define ll long long
#define endl "\n"   
using namespace std;




void solve() {
    string s; cin>>s;
    
    int n = s.si();
    vector<int> v(26,0);
    for(int i=0; i<n; i++){
        v[s[i]-'A']++;
    }
    string res="";
    for(int i=25; i>=0; i--){
        if(v[i] > 0){
            res += string(v[i], 'A' + i);
        }
    }
    cout<<res<<endl;




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


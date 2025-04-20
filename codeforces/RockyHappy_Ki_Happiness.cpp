#include<bits/stdc++.h>
#define ll long long
using namespace std;




void solve() {

    string s; cin>>s;
    int n=s.size();
    if(n<3){
        cout<<0<<'\n';
        return;
    }
    int count=0;
    unordered_map<char, int> mp;
    mp[s[0]]++;
    mp[s[1]]++;
    mp[s[2]]++;
    if(mp.size()==3) count++;
    for(int i=3; i<n; i++){
        mp[s[i-3]]--;
        mp[s[i]]++;
        if(mp[s[i-3]]==0) mp.erase(s[i-3]);
        if(mp.size()==3) count++;
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


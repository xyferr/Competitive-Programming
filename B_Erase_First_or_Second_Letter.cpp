#include<bits/stdc++.h>
#define ll long long


using namespace std;

//rohit



void solve() {
    ll n; cin>>n;
    string str; cin>>str;
    unordered_set<char> s;
    ll res=0;
    for(ll i=0; i<n;i++){
        s.insert(str[i]);
        res+=s.size();
    }
    cout<<res<<"\n";




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


#include<bits/stdc++.h>
#define ll long long
using namespace std;




void solve() {
    ll n; cin>>n;
    vector<int> a(n);
    set<int> s;
    for(ll i=0; i<n; i++){
        cin>>a[i];
        s.insert(a[i]);
    }
    ll res = s.size();
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


#include<bits/stdc++.h>
#define ll long long
#define endl "\n"   
using namespace std;




void solve() {
    ll n,m; cin>>n>>m;

    vector<ll> a(n),b(n);
    a[0] = 1;
    for(ll i=1; i<n; i++) cin>>a[i];
    for(ll i=0; i<n; i++) cin>>b[i];

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    ll res=0;
    int i=0, j=0;
    while(i<n && j<n){
        if(a[i] < b[j]){
            j++;
            i++;
        } else {
            j++;
            res++;
        }
    }
    cout << res << endl;
     




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


#include<bits/stdc++.h>
#define ll long long
using namespace std;




void solve() {
    ll n; cin>>n;
    vector<ll> a(n);
    for(int i=0; i<n; i++) cin>>a[i];
    ll m; cin>>m;
    vector<ll> b(m);
    for(int i=0; i<m; i++) cin>>b[i];

    ll max_a=INT_MIN;
    ll sum=0;
    for(int i=0; i<n; i++){
        //kadane's algorithm
        sum=max(sum+a[i],a[i]);
        max_a=max(max_a,sum);

    }
    ll max_b=INT_MIN;
    sum=0;
    for(int i=0; i<m; i++){
        //kadane's algorithm
        sum=max(sum+b[i],b[i]);
        max_b=max(max_b,sum);

    }
    cout<<max_a+max_b<<'\n';

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

